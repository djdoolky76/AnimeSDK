#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutTakeOrder; }
namespace RPG::GameCore { class TaskContext; }

#define HEJOBJLPCNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A2013E0)
#define HEJOBJLPCNL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A201B10)
#define HEJOBJLPCNL_KPBODLMCDMI_OFFSET UNITYSDK_OFFSET(0x1A2019A0)
#define HEJOBJLPCNL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A201410)
#define HEJOBJLPCNL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A201660)
#define HEJOBJLPCNL_TICK_OFFSET UNITYSDK_OFFSET(0x1A2016B0)

inline static constexpr unsigned int HEJOBJLPCNL_TypeDefinitionIndex = 53270;

	class HEJOBJLPCNL
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* HOPJIONMGFC; // 0x30
		::System::Boolean HJBDGPIFELM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x3C
		::System::Single FKHKAMDOPBE; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutTakeOrder*))((::PBYTE)hIl2Cpp + HEJOBJLPCNL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJOBJLPCNL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJOBJLPCNL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEJOBJLPCNL_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJOBJLPCNL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean KPBODLMCDMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJOBJLPCNL_KPBODLMCDMI_OFFSET))(this);
		}

	};
