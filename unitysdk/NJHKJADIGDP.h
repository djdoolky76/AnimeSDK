#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterSleep; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NJHKJADIGDP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0FFA0)
#define NJHKJADIGDP_FIKFOOIFKKJ_OFFSET UNITYSDK_OFFSET(0xBC10290)
#define NJHKJADIGDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC0FFD0)
#define NJHKJADIGDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC10130)
#define NJHKJADIGDP_TICK_OFFSET UNITYSDK_OFFSET(0xBC10180)

inline static constexpr unsigned int NJHKJADIGDP_TypeDefinitionIndex = 52173;

	class NJHKJADIGDP
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterSleep* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterSleep*))((::PBYTE)hIl2Cpp + NJHKJADIGDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHKJADIGDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHKJADIGDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJHKJADIGDP_TICK_OFFSET))(this, a1);
		}

		::System::Void FIKFOOIFKKJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJHKJADIGDP_FIKFOOIFKKJ_OFFSET))(this, a1);
		}

	};
