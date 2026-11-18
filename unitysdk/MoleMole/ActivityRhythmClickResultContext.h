#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGAANNPEJCH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_ACTIVITYRHYTHMCLICKRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10792170)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRhythmClickResultContext_TypeDefinitionIndex = 66579;

	class ActivityRhythmClickResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onRestart; // 0x28
		::System::Action* onClose; // 0x30
		::System::Int32 PerfectNum; // 0x38
		::EGAANNPEJCH Rank; // 0x3C
		::System::Int32 MissNum; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYRHYTHMCLICKRESULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
