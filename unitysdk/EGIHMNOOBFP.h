#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareHeartDialScriptStep; }
namespace RPG::GameCore { class TaskContext; }

#define EGIHMNOOBFP_CTOR_OFFSET UNITYSDK_OFFSET(0x14516C40)
#define EGIHMNOOBFP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14516C70)

inline static constexpr unsigned int EGIHMNOOBFP_TypeDefinitionIndex = 52570;

	class EGIHMNOOBFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + EGIHMNOOBFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIHMNOOBFP_EVALUATE_OFFSET))(this);
		}

	};
