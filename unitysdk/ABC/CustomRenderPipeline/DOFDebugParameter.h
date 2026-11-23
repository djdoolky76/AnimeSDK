#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F7C63FD12203AD82.h"

#define ABC_CUSTOMRENDERPIPELINE_DOFDEBUGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x27822B0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int DOFDebugParameter_TypeDefinitionIndex = 16555;

	class DOFDebugParameter
	{
	public:
		::System::Void _ctor(::B88870E9FB4B8C1A::F7C63FD12203AD82 E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::F7C63FD12203AD82, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DOFDEBUGPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
