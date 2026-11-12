#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckRoleTrialNormalWaveShowDetail; }
namespace RPG::GameCore { class TaskContext; }

#define FBGDKMMONOA_CTOR_OFFSET UNITYSDK_OFFSET(0x165B3C90)
#define FBGDKMMONOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165B3CC0)

inline static constexpr unsigned int FBGDKMMONOA_TypeDefinitionIndex = 55673;

	class FBGDKMMONOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + FBGDKMMONOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGDKMMONOA_EVALUATE_OFFSET))(this);
		}

	};
