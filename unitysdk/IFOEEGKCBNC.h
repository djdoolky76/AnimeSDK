#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class ST_ByInAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define IFOEEGKCBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F24990)
#define IFOEEGKCBNC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F24A50)

inline static constexpr unsigned int IFOEEGKCBNC_TypeDefinitionIndex = 52198;

	class IFOEEGKCBNC
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + IFOEEGKCBNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEEGKCBNC_EVALUATE_OFFSET))(this);
		}

	};
