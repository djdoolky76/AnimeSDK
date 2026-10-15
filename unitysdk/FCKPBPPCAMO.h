#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByHasTargetInAlertRange; }
namespace RPG::GameCore { class TaskContext; }

#define FCKPBPPCAMO_CTOR_OFFSET UNITYSDK_OFFSET(0x156BF130)
#define FCKPBPPCAMO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156BF160)

inline static constexpr unsigned int FCKPBPPCAMO_TypeDefinitionIndex = 53922;

	class FCKPBPPCAMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + FCKPBPPCAMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKPBPPCAMO_EVALUATE_OFFSET))(this);
		}

	};
