#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterEnterWait; }
namespace RPG::GameCore { class TaskContext; }

#define ODJEEMGCJCC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD94120)
#define ODJEEMGCJCC_LKEIOCBJBLI_OFFSET UNITYSDK_OFFSET(0xBD94610)
#define ODJEEMGCJCC_MPGKLNONLPH_OFFSET UNITYSDK_OFFSET(0xBD94290)
#define ODJEEMGCJCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD94150)
#define ODJEEMGCJCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD947F0)

	class ODJEEMGCJCC
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*))((::PBYTE)hIl2Cpp + ODJEEMGCJCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJEEMGCJCC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJEEMGCJCC_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean MPGKLNONLPH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + ODJEEMGCJCC_MPGKLNONLPH_OFFSET))(this, a1);
		}

		::System::Boolean LKEIOCBJBLI(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + ODJEEMGCJCC_LKEIOCBJBLI_OFFSET))(this, a1);
		}

	};
