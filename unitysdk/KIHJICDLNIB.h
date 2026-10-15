#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define KIHJICDLNIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB41EED0)
#define KIHJICDLNIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB41F5D0)
#define KIHJICDLNIB_LKCMFJMLOAH_OFFSET UNITYSDK_OFFSET(0xB41F160)
#define KIHJICDLNIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB41EF00)
#define KIHJICDLNIB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB41F520)
#define KIHJICDLNIB_TICK_OFFSET UNITYSDK_OFFSET(0xB41F570)

	class KIHJICDLNIB
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerProcessEvent*))((::PBYTE)hIl2Cpp + KIHJICDLNIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHJICDLNIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHJICDLNIB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHJICDLNIB_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHJICDLNIB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean LKCMFJMLOAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHJICDLNIB_LKCMFJMLOAH_OFFSET))(this);
		}

	};
