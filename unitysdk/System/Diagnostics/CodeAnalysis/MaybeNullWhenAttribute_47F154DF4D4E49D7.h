#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE_47F154DF4D4E49D7_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8FE0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int MaybeNullWhenAttribute_47F154DF4D4E49D7_TypeDefinitionIndex = 7526;

	class MaybeNullWhenAttribute_47F154DF4D4E49D7 : public ::System::Attribute
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MAYBENULLWHENATTRIBUTE_47F154DF4D4E49D7_CTOR_OFFSET))(this, a1);
		}

	};
}
