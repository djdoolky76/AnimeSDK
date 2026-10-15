#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED599A0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int DoesNotReturnIfAttribute_TypeDefinitionIndex = 6583;

	class DoesNotReturnIfAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ParameterValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_DOESNOTRETURNIFATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
