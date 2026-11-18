#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_INLINEBUTTONATTRIBUTE_GET_MEMBERMETHOD_OFFSET UNITYSDK_OFFSET(0x1FB80B00)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONATTRIBUTE_SET_MEMBERMETHOD_OFFSET UNITYSDK_OFFSET(0x1FB80B10)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB80B20)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InlineButtonAttribute_TypeDefinitionIndex = 7331;

	class InlineButtonAttribute : public ::System::Attribute
	{
	public:
		::System::String* Action; // 0x10
		::System::String* Label; // 0x18

		::System::Void _ctor(::System::String* action, ::System::String* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONATTRIBUTE__CTOR_OFFSET))(this, action, label);
		}

		::System::String* get_MemberMethod()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONATTRIBUTE_GET_MEMBERMETHOD_OFFSET))(this);
		}

		::System::Void set_MemberMethod(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONATTRIBUTE_SET_MEMBERMETHOD_OFFSET))(this, value);
		}
	};
}
