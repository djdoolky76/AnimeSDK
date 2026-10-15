#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Side_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define OEMFJPEALMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE32D70)
#define OEMFJPEALMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE32E30)
#define OEMFJPEALMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE32E80)
#define OEMFJPEALMD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE33220)
#define OEMFJPEALMD_TICK_OFFSET UNITYSDK_OFFSET(0xBE333B0)

	class OEMFJPEALMD
	{
	public:
		::RPG::GameCore::FreeStyleComponent* ECLBHCIOKHB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_PlayFreeStyle*))((::PBYTE)hIl2Cpp + OEMFJPEALMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMFJPEALMD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMFJPEALMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMFJPEALMD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEMFJPEALMD_TICK_OFFSET))(this, a1);
		}

	};
