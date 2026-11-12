#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20296F70)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20296E90)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20297120)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202971D0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x20297030)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerAttribute_TypeDefinitionIndex = 2582;

	class DesignerAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeId; // 0x10
		::System::String* designerTypeName; // 0x18
		::System::String* designerBaseTypeName; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

	};
}
