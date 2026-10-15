#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowHeartDialToast; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_CTOR_OFFSET UNITYSDK_OFFSET(0xE741BF0)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE741C00)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE741C40)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE741DC0)
#define RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_TICK_OFFSET UNITYSDK_OFFSET(0xE741E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialToastTask_TypeDefinitionIndex = 53273;

	class ShowHeartDialToastTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::ShowHeartDialToast* _ConfigRef; // 0x20
		// static const ::System::String* _FADE_OUT_ANIM_PARAM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHeartDialToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHeartDialToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALTOASTTASK_TICK_OFFSET))(this, a1);
		}

	};
}
