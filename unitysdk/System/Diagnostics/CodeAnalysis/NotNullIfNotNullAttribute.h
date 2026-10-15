#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLIFNOTNULLATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9000)

namespace System::Diagnostics::CodeAnalysis
{
	class NotNullIfNotNullAttribute : public ::System::Attribute
	{
	public:
		::System::String* _ParameterName_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLIFNOTNULLATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
