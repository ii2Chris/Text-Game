# Game

| ON PAUSE LOST ALL PROGRESS DUE TO BROKEN COMPUTER

So I am gonig to be making a text-based adventure game with JRPG aspects. These systems include:

1. Combat System
2. Level and Experience System
3. Equipment and Inventory System
4. Party System
5. Permadeath System
6. Saving and Loading (If Applicable)
7. World Exploration
8. Quests and Story
9. User Interface
10. Polishing and Balancing

A systematic approach i would like to work with is:

|-- Character/
|   |-- Character.h
|   `-- Character.cpp
|-- Combat/
|   |-- CombatSystem.h
|   `-- CombatSystem.cpp
|-- Equipment/
|   |-- Weapon.h
|   |-- Armor.h
|   `-- EquipmentManager.h
|-- Inventory/
|   |-- Inventory.h
|   `-- Inventory.cpp
|-- Party/
|   |-- Party.h
|   `-- Party.cpp
|-- SaveState/
|   |-- SaveSystem.h
|   `-- SaveSystem.cpp
|-- Quests/
|   |-- Quest.h
|   `-- Quest.cpp
`-- main.cpp
