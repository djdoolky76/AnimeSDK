#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class ST_Side_AttachAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define KCGDHDIOAPC_AJLKOCHBGHE_OFFSET UNITYSDK_OFFSET(0xB335B30)
#define KCGDHDIOAPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB335810)
#define KCGDHDIOAPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3358D0)
#define KCGDHDIOAPC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB335920)
#define KCGDHDIOAPC_TICK_OFFSET UNITYSDK_OFFSET(0xB335CC0)

	class KCGDHDIOAPC
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x28
		::System::Boolean GMIJEMAHBKE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_AttachAIStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_AttachAIStatus*))((::PBYTE)hIl2Cpp + KCGDHDIOAPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGDHDIOAPC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGDHDIOAPC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCGDHDIOAPC_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 AJLKOCHBGHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGDHDIOAPC_AJLKOCHBGHE_OFFSET))(this);
		}

	};
