#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutWait; }
namespace RPG::GameCore { class TaskContext; }

#define AAFIJJCKIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C5E20)
#define AAFIJJCKIDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C6310)
#define AAFIJJCKIDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C5E50)
#define AAFIJJCKIDE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0C6120)
#define AAFIJJCKIDE_TICK_OFFSET UNITYSDK_OFFSET(0xB0C6170)

inline static constexpr unsigned int AAFIJJCKIDE_TypeDefinitionIndex = 52166;

	class AAFIJJCKIDE
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* HOPJIONMGFC; // 0x28
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30
		::System::Single FJDKAMJBHHK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*))((::PBYTE)hIl2Cpp + AAFIJJCKIDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFIJJCKIDE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFIJJCKIDE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAFIJJCKIDE_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFIJJCKIDE_DISPOSE_OFFSET))(this);
		}

	};
