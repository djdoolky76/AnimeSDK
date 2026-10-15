#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_C3471522133A2E2F_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8FD0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnIfAttribute_C3471522133A2E2F_TypeDefinitionIndex = 7525;

	class DoesNotReturnIfAttribute_C3471522133A2E2F : public ::System::Attribute
	{
	public:
		::System::Boolean _ParameterValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_C3471522133A2E2F_CTOR_OFFSET))(this, a1);
		}

	};
}
