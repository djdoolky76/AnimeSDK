#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/PermissionSet.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17543630)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_CTOR_2_OFFSET UNITYSDK_OFFSET(0x17543850)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x17543550)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x17544130)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175446E0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17543860)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17543740)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_TOXML_OFFSET UNITYSDK_OFFSET(0x17543870)

namespace System::Security
{
	inline static constexpr unsigned int NamedPermissionSet_TypeDefinitionIndex = 945;

	class NamedPermissionSet : public ::System::Security::PermissionSet
	{
	public:
		::System::String* description; // 0x30
		::System::String* name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Security::Permissions::PermissionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_CTOR_2_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_SET_NAME_OFFSET))(this, a1);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_TOXML_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_GETHASHCODE_OFFSET))(this);
		}

	};
}
