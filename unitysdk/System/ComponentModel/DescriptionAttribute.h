#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class DescriptionAttribute; }

#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB0BAF0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB0B7B0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0B790)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB0B7F0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB0B990)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1DB0B7D0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1DB0B7C0)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DB0BA80)
#define SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_SET_DESCRIPTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1DB0B7E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DescriptionAttribute_TypeDefinitionIndex = 2581;

	class DescriptionAttribute : public ::System::Attribute
	{
	public:
		::System::String* description; // 0x10
		static ::System::ComponentModel::DescriptionAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DescriptionAttribute**)UnitySDK::FromName("System.ComponentModel", "DescriptionAttribute")->GetStaticField(0x33980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_DescriptionValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GET_DESCRIPTIONVALUE_OFFSET))(this);
		}

		::System::Void set_DescriptionValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_SET_DESCRIPTIONVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESCRIPTIONATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

	};
}
