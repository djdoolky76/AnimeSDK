#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareBP; }
namespace RPG::GameCore { class TaskContext; }

#define DAFBDDNADJP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC1960)
#define DAFBDDNADJP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFC1990)

	class DAFBDDNADJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + DAFBDDNADJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFBDDNADJP_EVALUATE_OFFSET))(this);
		}

	};
