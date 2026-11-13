#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System::ComponentModel { class BrowsableAttribute; }

#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB08ED0)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB08D80)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB08DA0)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB08E00)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GET_BROWSABLE_OFFSET UNITYSDK_OFFSET(0x1DB08D90)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DB08E10)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BrowsableAttribute_TypeDefinitionIndex = 2565;

	class BrowsableAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean browsable; // 0x10
		static ::System::ComponentModel::BrowsableAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::BrowsableAttribute**)UnitySDK::FromName("System.ComponentModel", "BrowsableAttribute")->GetStaticField(0x33280);
		}

		static ::System::ComponentModel::BrowsableAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::BrowsableAttribute**)UnitySDK::FromName("System.ComponentModel", "BrowsableAttribute")->GetStaticField(0x33288);
		}

		static ::System::ComponentModel::BrowsableAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::BrowsableAttribute**)UnitySDK::FromName("System.ComponentModel", "BrowsableAttribute")->GetStaticField(0x33290);
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::Boolean get_Browsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GET_BROWSABLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

	};
}
