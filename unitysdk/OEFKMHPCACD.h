#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerDrink; }
namespace RPG::GameCore { class TaskContext; }

#define OEFKMHPCACD_AJMLMFCGGBM_OFFSET UNITYSDK_OFFSET(0xBE2C100)
#define OEFKMHPCACD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2B7C0)
#define OEFKMHPCACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2C280)
#define OEFKMHPCACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE2B7E0)
#define OEFKMHPCACD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE2BBE0)
#define OEFKMHPCACD_TICK_OFFSET UNITYSDK_OFFSET(0xBE2BC30)

	class OEFKMHPCACD
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30
		::System::Single PGMIOKKLHIE; // 0x38
		::System::Single HBDJCFFDGDD; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerDrink* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerDrink*))((::PBYTE)hIl2Cpp + OEFKMHPCACD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFKMHPCACD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFKMHPCACD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEFKMHPCACD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFKMHPCACD_DISPOSE_OFFSET))(this);
		}

		::System::Void AJMLMFCGGBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFKMHPCACD_AJMLMFCGGBM_OFFSET))(this);
		}

	};
