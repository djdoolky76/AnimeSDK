#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitEating; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define KILKDCEJLIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCA6D0)
#define KILKDCEJLIG_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xBCCB870)
#define KILKDCEJLIG_NEACKLFJFDL_OFFSET UNITYSDK_OFFSET(0xBCCB1F0)
#define KILKDCEJLIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCCA720)
#define KILKDCEJLIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCCA960)
#define KILKDCEJLIG_PFHBHAKCCME_OFFSET UNITYSDK_OFFSET(0xBCCB4A0)
#define KILKDCEJLIG_TICK_OFFSET UNITYSDK_OFFSET(0xBCCA9B0)

inline static constexpr unsigned int KILKDCEJLIG_TypeDefinitionIndex = 53263;

	class KILKDCEJLIG
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* IJDCKBPPNMD; // 0x30
		::System::String* EPDMDINOGJO; // 0x38
		::System::Single PGMIOKKLHIE; // 0x40
		::System::Single MCFPCODHEBK; // 0x44
		::System::Boolean IOCHOFBMBKG; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerWaitEating*))((::PBYTE)hIl2Cpp + KILKDCEJLIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILKDCEJLIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILKDCEJLIG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KILKDCEJLIG_TICK_OFFSET))(this, a1);
		}

		::System::Void PFHBHAKCCME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILKDCEJLIG_PFHBHAKCCME_OFFSET))(this);
		}

		::System::Void NEACKLFJFDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILKDCEJLIG_NEACKLFJFDL_OFFSET))(this);
		}

		::System::Void HHGNECAGCCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILKDCEJLIG_HHGNECAGCCA_OFFSET))(this);
		}

	};
