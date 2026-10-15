#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterTimeOverPerform; }
namespace RPG::GameCore { class TaskContext; }

#define AFAOBDEGOAO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF04A10)
#define AFAOBDEGOAO_DIKFHKDIMBM_OFFSET UNITYSDK_OFFSET(0xCF04D20)
#define AFAOBDEGOAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF04A40)
#define AFAOBDEGOAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF05180)
#define AFAOBDEGOAO_TICK_OFFSET UNITYSDK_OFFSET(0xCF04C90)

	class AFAOBDEGOAO
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x30
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
