#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C426650)

namespace System::Diagnostics::CodeAnalysis
{
	class MemberNotNullWhenAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Members_k__BackingField; // 0x10
		::System::Boolean _ReturnValue_k__BackingField; // 0x18
		::System::Void _ctor(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_MEMBERNOTNULLWHENATTRIBUTE_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
