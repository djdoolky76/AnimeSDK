#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLWHENATTRIBUTE_9F52E55F3F1F1711_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4266A0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int NotNullWhenAttribute_9F52E55F3F1F1711_TypeDefinitionIndex = 35895;

	class NotNullWhenAttribute_9F52E55F3F1F1711 : public ::System::Attribute
	{
	public:
		::System::Boolean _ReturnValue_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLWHENATTRIBUTE_9F52E55F3F1F1711_CTOR_OFFSET))(this, a1);
		}

	};
}
