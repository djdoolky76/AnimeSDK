#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutDelivery; }
namespace RPG::GameCore { class TaskContext; }

#define LPDHAPMBOCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6AE670)
#define LPDHAPMBOCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6AEA50)
#define LPDHAPMBOCO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B6AE6A0)
#define LPDHAPMBOCO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B6AE9A0)
#define LPDHAPMBOCO_TICK_OFFSET UNITYSDK_OFFSET(0x1B6AE9F0)

inline static constexpr unsigned int LPDHAPMBOCO_TypeDefinitionIndex = 53269;

	class LPDHAPMBOCO
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* HOPJIONMGFC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*))((::PBYTE)hIl2Cpp + LPDHAPMBOCO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDHAPMBOCO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDHAPMBOCO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPDHAPMBOCO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDHAPMBOCO_DISPOSE_OFFSET))(this);
		}

	};
