#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterTimeOverPerform; }
namespace RPG::GameCore { class TaskContext; }

#define AFAOBDEGOAO_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA8CD0)
#define AFAOBDEGOAO_DIKFHKDIMBM_OFFSET UNITYSDK_OFFSET(0x18DA8FE0)
#define AFAOBDEGOAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DA8D00)
#define AFAOBDEGOAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DA9440)
#define AFAOBDEGOAO_TICK_OFFSET UNITYSDK_OFFSET(0x18DA8F50)

inline static constexpr unsigned int AFAOBDEGOAO_TypeDefinitionIndex = 53280;

	class AFAOBDEGOAO
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x28
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30
		::System::Single PGMIOKKLHIE; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*))((::PBYTE)hIl2Cpp + AFAOBDEGOAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAOBDEGOAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFAOBDEGOAO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAOBDEGOAO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DIKFHKDIMBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAOBDEGOAO_DIKFHKDIMBM_OFFSET))(this);
		}

	};
