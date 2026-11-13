#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DesignerSerializationVisibility.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System::ComponentModel { class DesignerSerializationVisibilityAttribute; }

#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C176770)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C176620)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C176640)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C1766A0)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1C176630)
#define SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C1766B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerSerializationVisibilityAttribute_TypeDefinitionIndex = 2585;

	class DesignerSerializationVisibilityAttribute : public ::System::Attribute
	{
	public:
		::System::ComponentModel::DesignerSerializationVisibility visibility; // 0x10
		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Visible()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerSerializationVisibilityAttribute")->GetStaticField(0x34830);
		}

		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Hidden()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerSerializationVisibilityAttribute")->GetStaticField(0x34838);
		}

		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Content()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerSerializationVisibilityAttribute")->GetStaticField(0x34840);
		}

		static ::System::ComponentModel::DesignerSerializationVisibilityAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DesignerSerializationVisibilityAttribute**)UnitySDK::FromName("System.ComponentModel", "DesignerSerializationVisibilityAttribute")->GetStaticField(0x34848);
		}

		::System::Void _ctor(::System::ComponentModel::DesignerSerializationVisibility a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DesignerSerializationVisibility))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::ComponentModel::DesignerSerializationVisibility get_Visibility()
		{
			return ((::System::ComponentModel::DesignerSerializationVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

	};
}
