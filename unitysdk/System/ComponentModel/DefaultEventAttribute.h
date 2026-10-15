#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class DefaultEventAttribute; }

#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFB77B0)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB7700)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFB7720)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFB77A0)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EFB7710)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultEventAttribute_TypeDefinitionIndex = 2577;

	class DefaultEventAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10
		static ::System::ComponentModel::DefaultEventAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DefaultEventAttribute**)UnitySDK::FromName("System.ComponentModel", "DefaultEventAttribute")->GetStaticField(0x2B3E0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

	};
}
