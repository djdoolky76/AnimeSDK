#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLATTRIBUTE_4E16C6C00FD19D27_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED599C0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int NotNullAttribute_4E16C6C00FD19D27_TypeDefinitionIndex = 6579;

	class NotNullAttribute_4E16C6C00FD19D27 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLATTRIBUTE_4E16C6C00FD19D27_CTOR_OFFSET))(this);
		}

	};
}
