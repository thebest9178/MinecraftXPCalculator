#include <iostream>
using namespace std;

//Formula for xp "4.5 × level2 – 162.5 × level + 2220 (at levels 32+)"

int level;
int levelsquared;
int calculatedxp;
int XPRates;

//Killing
double PassiveGroup1_Amount = 1.5; //Strider (1-2)
int PassiveGroup2_Amount = 2; //Bee Cat Chicken Fish Cow Fox Horses Llama Mooshroom Ocelot Panda Parrot Pig PolarBear Rabbit Sheep Squid Dolphin Turtle Wolf (1-3)
int MonstersGroup1_Amount = 3; //Endermite (3)
int MonstersGroup2_Amount = 5; //CaveSpider Creeper Drowned Enderman Ghast Hoglin Husk Illusioner Phantom Piglin Pillager Shulker Silverfish Skeleton Spider Stray Vex Vindicator Witch WitherSkeleton Zombie ZombieVillager Zoglin ZombifiedPiglin (5 Ignoring armour)
int MonstersGroup3_Amount = 10; //Blaze Evoker ElderGuardian Guardian (10)
int MonstersGroup4_Amount = 20; //Ravager PiglinBrute
int BabyMonstersGroup_Amount = 12; //BabyHusk BabyDrowned BabyZombie BabyZombifiedPiglin BabyZombieVillager (12 Ignoring armour)
int LargeCubicMobs_Amount = 4; //LargeSlime LargeMagmaCube (4)
int MediumCubicMobs_Amount = 2; //MediumSlime MediumMagmaCube (2)
int SmallCubicMobs_Amount = 1; //SmallSlime SmallMagmaCube (1)
int EnderDragon_Amount = 500; //EnderDragon (500 Unless it's the first dragon in which case it's 12000 but that won't apply to 99.9999% of people)
int Wither_Amount = 50; //Wither (50)
//Mining
float MiningGroup1_Amount = 0.5; //NetherGoldOre (0-1)
int MiningGroup2_Amount = 1; //CoalOre (0-2)
int MiningGroup3_Amount = 3; //RedstoneOre (1-5)
double MiningGroup4_Amount = 3.5; //LapisLazuliOre NetherQuartzOre (2-5)
int MiningGroup5_Amount = 5; //DiamondOre EmeraldOre (3-7)
int MiningGroup6_Amount = 29; //MobSpawner (15-43)
//Smelting and cooking
int SmeltingGroup1_Amount = 2; //AncientDebris (2)
int SmeltingGroup2_Amount = 1; //Cactus DiamondOre EmeraldOre GoldOre NetherGoldOre (1)
double SmeltingGroup3_Amount = 0.7; //IronOre RedstoneOre (0.7)
double SmeltingGroup4_Amount = 0.35; //ClayBlock Potato RawBeef RawChicken RawCod RawMutton RawPorkchop RawRabbit RawSalmon (0.35)
double SmeltingGroup5_Amount = 0.3; //ClayBall (0.3)
double SmeltingGroup6_Amount = 0.2; //LapisLazuliOre NetherQuartzOre (0.2)
double SmeltingGroup7_Amount = 0.15; //WetSponge Wood (0.15)
double SmeltingGroup8_Amount = 0.1; //ChorusFruit CoalOre Cobblestone Stone DyedTerracotta Netherrack Sand StoneBricks Iron, Gold, Chainmail Gear IronHorseArmour GoldHorseArmour Kelp (0.1)
//Other
int BottleoEnchanting_Amount = 7; //Bottle o' Enchanting (3-11)
double VillagerTrade_Amount = 4.5; //Villager trades (3-6 Unless the villagers are willing to breed then it's 8-11)
int AnimalBreeding_Amount = 4; //Breeding any mob (1-7)
double Fishing_Amount = 3.5; //Catching any item (1-6)

//Finals
double PassiveGroup1_Final;
double PassiveGroup2_Final;
double MonstersGroup1_Final;
double MonstersGroup2_Final;
double MonstersGroup3_Final;
double MonstersGroup4_Final;
double BabyMonstersGroup_Final;
double LargeCubicMobs_Final;
double MediumCubicMobs_Final;
double SmallCubicMobs_Final;
double EnderDragon_Final;
double Wither_Final;

double MiningGroup1_Final;
double MiningGroup2_Final;
double MiningGroup3_Final;
double MiningGroup4_Final;
double MiningGroup5_Final;
double MiningGroup6_Final;

double SmeltingGroup1_Final;
double SmeltingGroup2_Final;
double SmeltingGroup3_Final;
double SmeltingGroup4_Final;
double SmeltingGroup5_Final;
double SmeltingGroup6_Final;
double SmeltingGroup7_Final;
double SmeltingGroup8_Final;

double BottleoEnchanting_Final;
double VillagerTrade_Final;
double AnimalBreeding_Final;
double Fishing_Final;



int main()
{
   
    //input and math for xp needed for set level
    cout << "Enter an XP level" << endl << endl;
    cin >> level;
    cout << endl;
    levelsquared = level * level;
    calculatedxp = 4.5 * levelsquared - 162.5 * level + 2220;


    //Calculates finals
    PassiveGroup1_Final = calculatedxp / PassiveGroup1_Amount;
    PassiveGroup2_Final = calculatedxp / PassiveGroup2_Amount;
    MonstersGroup1_Final = calculatedxp / MonstersGroup1_Amount;
    MonstersGroup2_Final = calculatedxp / MonstersGroup2_Amount;
    MonstersGroup3_Final = calculatedxp / MonstersGroup3_Amount;
    MonstersGroup4_Final = calculatedxp / MonstersGroup4_Amount;
    BabyMonstersGroup_Final = calculatedxp / BabyMonstersGroup_Amount;
    LargeCubicMobs_Final = calculatedxp / LargeCubicMobs_Amount;
    MediumCubicMobs_Final = calculatedxp / MediumCubicMobs_Amount;
    SmallCubicMobs_Final = calculatedxp / SmallCubicMobs_Amount;
    EnderDragon_Final = calculatedxp / EnderDragon_Amount;
    Wither_Final = calculatedxp / Wither_Amount;

    MiningGroup1_Final = calculatedxp / MiningGroup1_Amount;
    MiningGroup2_Final = calculatedxp / MiningGroup2_Amount;
    MiningGroup3_Final = calculatedxp / MiningGroup3_Amount;
    MiningGroup4_Final = calculatedxp / MiningGroup4_Amount;
    MiningGroup5_Final = calculatedxp / MiningGroup5_Amount;
    MiningGroup6_Final = calculatedxp / MiningGroup6_Amount;

    SmeltingGroup1_Final = calculatedxp / SmeltingGroup1_Amount;
    SmeltingGroup2_Final = calculatedxp / SmeltingGroup2_Amount;
    SmeltingGroup3_Final = calculatedxp / SmeltingGroup3_Amount;
    SmeltingGroup4_Final = calculatedxp / SmeltingGroup4_Amount;
    SmeltingGroup5_Final = calculatedxp / SmeltingGroup5_Amount;
    SmeltingGroup6_Final = calculatedxp / SmeltingGroup6_Amount;
    SmeltingGroup7_Final = calculatedxp / SmeltingGroup7_Amount;
    SmeltingGroup8_Final = calculatedxp / SmeltingGroup8_Amount;

    BottleoEnchanting_Final = calculatedxp / BottleoEnchanting_Amount;
    VillagerTrade_Final = calculatedxp / VillagerTrade_Amount;
    AnimalBreeding_Final = calculatedxp / AnimalBreeding_Amount;
    Fishing_Final = calculatedxp / Fishing_Amount;


    //Prints output
    cout << calculatedxp << " XP is needed to get to level " << level << endl << endl;

    cout << "Mob kills" << endl;
    cout << PassiveGroup1_Final << " Striders" << endl;
    cout << PassiveGroup2_Final << " Bees, Cats, Chickens, Fishes, Cows, Foxes, Horses, Llamas, Mooshrooms, Ocelots, Pandas, Parrots, Pigs, PolarBears, Rabbits, Sheep, Squid, Dolphins, Turtles, Wolves" << endl;
    cout << MonstersGroup1_Final << " Endermites" << endl;
    cout << MonstersGroup2_Final << " CaveSpiders, Creepers, Drowned, Endermen, Ghasts, Hoglins, Husks, Illusioners, Phantoms, Piglins, Pillagers, Shulkers, Silverfish, Skeletons, Spiders, Stray, Vexs, Vindicators, Witches, Wither Skeletons, Zombies, Zombie Villagers, Zoglins, Zombified Piglins" << endl;
    cout << MonstersGroup3_Final << " Blazes, Evokers, ElderGuardians, Guardians" << endl;
    cout << MonstersGroup4_Final << " Eavagers, PiglinBrutes" << endl;
    cout << BabyMonstersGroup_Final << " Baby Husks, Baby Drowned, Baby Zombies, Baby Zombified Piglins, Baby Zombie Villagers" << endl;
    cout << LargeCubicMobs_Final << " LargeSlimes, LargeMagmaCubes" << endl;
    cout << MediumCubicMobs_Final << " MediumSlimes, MediumMagmaCubes" << endl;
    cout << SmallCubicMobs_Final << " SmallSlimes, SmallMagmaCubes" << endl;
    cout << EnderDragon_Final << " EnderDragons" << endl;
    cout << Wither_Final << " Withers" << endl << endl;
    cout << "Mining" << endl;
    cout << MiningGroup1_Final << " Nether Gold Ore" << endl;
    cout << MiningGroup2_Final << " Coal Ore" << endl;
    cout << MiningGroup3_Final << " Redstone Ore" << endl;
    cout << MiningGroup4_Final << " Lapis Lazuli Ore, Nether Quartz Ore" << endl;
    cout << MiningGroup5_Final << " Diamond Ore, Emerald Ore" << endl;
    cout << MiningGroup6_Final << " MobSpawners" << endl << endl;
    cout << "Smelting" << endl;
    cout << SmeltingGroup1_Final << " AncientDebris" << endl;
    cout << SmeltingGroup2_Final << " Cactus, Diamond Ore, Emerald Ore, Gold Ore, Nether Gold Ore" << endl;
    cout << SmeltingGroup3_Final << " Iron Ore, Redstone Ore" << endl;
    cout << SmeltingGroup4_Final << " Clay Blocks, Potatos, Raw Beef, Raw Chicken, Raw Cod, Raw Mutton, Raw Porkchop, Raw Rabbit, Raw Salmon" << endl;
    cout << SmeltingGroup5_Final << " Clay Balls" << endl;
    cout << SmeltingGroup6_Final << " Lapis Lazuli Ore, Nether Quartz Ore" << endl;
    cout << SmeltingGroup7_Final << " Wet Sponges, Wood" << endl;
    cout << SmeltingGroup8_Final << " ChorusFruit, Coal Ore, Cobblestone, Stone, DyedTerracotta, Netherrack, Sand, StoneBricks, Iron, Gold, Chainmail Gear, IronHorseArmour, GoldHorseArmour, Kelp" << endl << endl;
    cout << "Misc" << endl;
    cout << BottleoEnchanting_Final << " Bottle o' Enchanting" << endl;
    cout << VillagerTrade_Final << " Villager trades" << endl;
    cout << AnimalBreeding_Final << " Mobs to breed" << endl;
    cout << Fishing_Final << " Fishing catches" << endl;


    system("pause");
}
