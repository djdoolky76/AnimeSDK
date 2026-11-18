#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD30FC0)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD31070)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1DD30F60)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_RECEIVERTYPENAME_OFFSET UNITYSDK_OFFSET(0x1DD30F70)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1DD30F80)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD30F50)
#define SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD30F20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ProvidePropertyAttribute_TypeDefinitionIndex = 2964;

	class ProvidePropertyAttribute : public ::System::Attribute
	{
	public:
		::System::String* propertyName; // 0x10
		::System::String* receiverTypeName; // 0x18

		::System::Void _ctor(::System::String* propertyName, ::System::Type* receiverType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE__CTOR_OFFSET))(this, propertyName, receiverType);
		}

		::System::Void _ctor_1(::System::String* propertyName, ::System::String* receiverTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE__CTOR_1_OFFSET))(this, propertyName, receiverTypeName);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::String* get_ReceiverTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_RECEIVERTYPENAME_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROVIDEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
