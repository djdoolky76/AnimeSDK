#pragma once
#include "unitysdk/unitysdk.h"
class IMEFEGGEMIJ;
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterPutdownFood; }
namespace RPG::GameCore { class TaskContext; }

#define IIAFEBHHBED_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x16421E90)
#define IIAFEBHHBED_BNKIJBKGMNK_OFFSET UNITYSDK_OFFSET(0x16422010)
#define IIAFEBHHBED_CTOR_OFFSET UNITYSDK_OFFSET(0x16421500)
#define IIAFEBHHBED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16421520)
#define IIAFEBHHBED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16422960)
#define IIAFEBHHBED_TICK_OFFSET UNITYSDK_OFFSET(0x16421B80)

inline static constexpr unsigned int IIAFEBHHBED_TypeDefinitionIndex = 52172;

	class IIAFEBHHBED
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* IJDCKBPPNMD; // 0x28
		::IMEFEGGEMIJ* CFLPIIGIFDM; // 0x30
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* EHMJOACJLCG; // 0x38
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* ONBOKIHOBCA; // 0x40
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x48
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* GPONHMHCEDI; // 0x50
		::System::Int32 NOLLEHFIJHH; // 0x58
		::System::Boolean NINPJMDPDPO; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x60
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*))((::PBYTE)hIl2Cpp + IIAFEBHHBED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFEBHHBED_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIAFEBHHBED_TICK_OFFSET))(this, a1);
		}

		::System::Void BNKIJBKGMNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFEBHHBED_BNKIJBKGMNK_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFEBHHBED_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFEBHHBED_ONTASKRESET_OFFSET))(this);
		}

	};
