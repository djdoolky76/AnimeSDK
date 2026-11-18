#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1FB81A60)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_GET_ANIMATE_OFFSET UNITYSDK_OFFSET(0x1FB818F0)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1FB81930)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1FB81910)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_SET_ANIMATE_OFFSET UNITYSDK_OFFSET(0x1FB81900)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1FB81960)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1FB81950)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB819E0)
#define SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB81970)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowIfGroupAttribute_TypeDefinitionIndex = 7365;

	class ShowIfGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::Object* Value; // 0x30

		::System::Void _ctor(::System::String* path, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE__CTOR_OFFSET))(this, path, animate);
		}

		::System::Void _ctor_1(::System::String* path, ::System::Object* value, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE__CTOR_1_OFFSET))(this, path, value, animate);
		}

		::System::Boolean get_Animate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_GET_ANIMATE_OFFSET))(this);
		}

		::System::Void set_Animate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_SET_ANIMATE_OFFSET))(this, value);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}

		::System::String* get_Condition()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_Condition(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_SET_CONDITION_OFFSET))(this, value);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
