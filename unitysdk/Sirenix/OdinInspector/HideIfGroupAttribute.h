#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1FB806F0)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_GET_ANIMATE_OFFSET UNITYSDK_OFFSET(0x1FB80510)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1FB80550)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1FB80530)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_SET_ANIMATE_OFFSET UNITYSDK_OFFSET(0x1FB80520)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1FB80580)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1FB80570)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB80670)
#define SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB80590)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideIfGroupAttribute_TypeDefinitionIndex = 7313;

	class HideIfGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::Object* Value; // 0x30

		::System::Void _ctor(::System::String* path, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE__CTOR_OFFSET))(this, path, animate);
		}

		::System::Void _ctor_1(::System::String* path, ::System::Object* value, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE__CTOR_1_OFFSET))(this, path, value, animate);
		}

		::System::Boolean get_Animate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_GET_ANIMATE_OFFSET))(this);
		}

		::System::Void set_Animate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_SET_ANIMATE_OFFSET))(this, value);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}

		::System::String* get_Condition()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_Condition(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_SET_CONDITION_OFFSET))(this, value);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
