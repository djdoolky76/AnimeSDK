#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class DesignerCategoryAttribute; }

#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x202975B0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20297310)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x202972F0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x202973E0)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20297460)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x20297320)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x20297330)
#define SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x202974F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerCategoryAttribute_TypeDefinitionIndex = 2583;

	class DesignerCategoryAttribute : public ::System::Attribute
	{
	public:
		::System::String* typeId; // 0x10
		::System::String* category; // 0x18
		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Component()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerCategoryAttribute")->GetStaticField(0x2A730);
		}

		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Form()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerCategoryAttribute")->GetStaticField(0x2A738);
		}

		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerCategoryAttribute")->GetStaticField(0x2A740);
		}

		static ::System::ComponentModel::DesignerCategoryAttribute** StaticGet_Generic()
		{
			return (::System::ComponentModel::DesignerCategoryAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerCategoryAttribute")->GetStaticField(0x2A748);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Object* get_TypeId()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERCATEGORYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

	};
}
