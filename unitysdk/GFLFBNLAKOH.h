#pragma once
#include "unitysdk/unitysdk.h"
class JCBAIKOADID;
namespace RPG::GameCore { class TaskContext; }

#define GFLFBNLAKOH_CTOR_OFFSET UNITYSDK_OFFSET(0x159FB9A0)
#define GFLFBNLAKOH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159FB9D0)

	class GFLFBNLAKOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JCBAIKOADID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JCBAIKOADID*))((::PBYTE)hIl2Cpp + GFLFBNLAKOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLFBNLAKOH_EVALUATE_OFFSET))(this);
		}

	};
