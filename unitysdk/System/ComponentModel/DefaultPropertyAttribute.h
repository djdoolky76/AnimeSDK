#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class DefaultPropertyAttribute; }

#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE56B0)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE5600)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFE5620)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFE56A0)
#define SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EFE5610)

namespace System::ComponentModel
{
	class DefaultPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10
		static ::System::ComponentModel::DefaultPropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DefaultPropertyAttribute**)UnitySDK::FromName("System.ComponentModel", "DefaultPropertyAttribute")->GetStaticField(0x39820);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

	};
}
