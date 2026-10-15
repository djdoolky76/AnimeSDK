#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterSuperEventReady; }
namespace RPG::GameCore { class TaskContext; }

#define GIFKCLMJMAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A344C0)
#define GIFKCLMJMAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A34750)
#define GIFKCLMJMAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A344F0)
#define GIFKCLMJMAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A346A0)
#define GIFKCLMJMAO_TICK_OFFSET UNITYSDK_OFFSET(0x15A346F0)

	class GIFKCLMJMAO
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*))((::PBYTE)hIl2Cpp + GIFKCLMJMAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFKCLMJMAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFKCLMJMAO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIFKCLMJMAO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFKCLMJMAO_DISPOSE_OFFSET))(this);
		}

	};
