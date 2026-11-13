#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System::ComponentModel { class NotifyParentPropertyAttribute; }

#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C17D230)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C17D0E0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C17D100)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C17D160)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET UNITYSDK_OFFSET(0x1C17D0F0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C17D170)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyParentPropertyAttribute_TypeDefinitionIndex = 2652;

	class NotifyParentPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean notifyParent; // 0x10
		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)UnitySDK::FromName("System.ComponentModel", "NotifyParentPropertyAttribute")->GetStaticField(0x35350);
		}

		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)UnitySDK::FromName("System.ComponentModel", "NotifyParentPropertyAttribute")->GetStaticField(0x35358);
		}

		static ::System::ComponentModel::NotifyParentPropertyAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::NotifyParentPropertyAttribute**)UnitySDK::FromName("System.ComponentModel", "NotifyParentPropertyAttribute")->GetStaticField(0x35360);
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::Boolean get_NotifyParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

	};
}
