#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class DisplayNameAttribute; }

#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C176B60)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C176830)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C176810)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C176860)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C176A00)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET UNITYSDK_OFFSET(0x1C176850)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1C176840)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C176AF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DisplayNameAttribute_TypeDefinitionIndex = 2586;

	class DisplayNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _displayName; // 0x10
		static ::System::ComponentModel::DisplayNameAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DisplayNameAttribute**)UnitySDK::FromName("System.ComponentModel", "DisplayNameAttribute")->GetStaticField(0x34A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_DisplayNameValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

	};
}
