#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamNormalActionSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define NNLMFEGOOHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCAC20)
#define NNLMFEGOOHP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCCAC50)

	class NNLMFEGOOHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + NNLMFEGOOHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLMFEGOOHP_EVALUATE_OFFSET))(this);
		}

	};
