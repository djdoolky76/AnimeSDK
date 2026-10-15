#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindForbidSelect; }

#define MPCDELAGPHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA39340)
#define MPCDELAGPHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA39370)

	class MPCDELAGPHG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindForbidSelect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindForbidSelect*))((::PBYTE)hIl2Cpp + MPCDELAGPHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDELAGPHG_ONTASKBEGIN_OFFSET))(this);
		}

	};
