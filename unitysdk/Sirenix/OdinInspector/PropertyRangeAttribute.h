#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_GET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1FB81640)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_GET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1FB81620)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_SET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1FB81650)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_SET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1FB81630)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB81690)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FB816A0)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FB816B0)
#define SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB81660)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertyRangeAttribute_TypeDefinitionIndex = 7354;

	class PropertyRangeAttribute : public ::System::Attribute
	{
	public:
		::System::String* MaxGetter; // 0x10
		::System::String* MinGetter; // 0x18
		::System::Double Max; // 0x20
		::System::Double Min; // 0x28

		::System::Void _ctor(::System::Double min, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}

		::System::Void _ctor_1(::System::String* minGetter, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_1_OFFSET))(this, minGetter, max);
		}

		::System::Void _ctor_2(::System::Double min, ::System::String* maxGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_2_OFFSET))(this, min, maxGetter);
		}

		::System::Void _ctor_3(::System::String* minGetter, ::System::String* maxGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE__CTOR_3_OFFSET))(this, minGetter, maxGetter);
		}

		::System::String* get_MinMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_GET_MINMEMBER_OFFSET))(this);
		}

		::System::Void set_MinMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_SET_MINMEMBER_OFFSET))(this, value);
		}

		::System::String* get_MaxMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_GET_MAXMEMBER_OFFSET))(this);
		}

		::System::Void set_MaxMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYRANGEATTRIBUTE_SET_MAXMEMBER_OFFSET))(this, value);
		}
	};
}
