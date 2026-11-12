#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerExtraPay; }
namespace RPG::GameCore { class TaskContext; }

#define NBPGPDNLLDG_CTOR_OFFSET UNITYSDK_OFFSET(0xC37CC30)
#define NBPGPDNLLDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC37D150)
#define NBPGPDNLLDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC37CC50)
#define NBPGPDNLLDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC37CF80)
#define NBPGPDNLLDG_TICK_OFFSET UNITYSDK_OFFSET(0xC37CFD0)

inline static constexpr unsigned int NBPGPDNLLDG_TypeDefinitionIndex = 53259;

	class NBPGPDNLLDG
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x30
		::System::Single PGMIOKKLHIE; // 0x38
		::System::Single HBDJCFFDGDD; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*))((::PBYTE)hIl2Cpp + NBPGPDNLLDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPGPDNLLDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPGPDNLLDG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBPGPDNLLDG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPGPDNLLDG_DISPOSE_OFFSET))(this);
		}

	};
