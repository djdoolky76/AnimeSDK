#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/SecurityPermissionFlag.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Permissions { class SecurityPermission; }

#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CAST_OFFSET UNITYSDK_OFFSET(0x1C0ECB90)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0ECB50)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1C0ECC00)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1C0EC540)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C0ECB80)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1C0ECC10)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityPermission_TypeDefinitionIndex = 967;

	class SecurityPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Security::Permissions::SecurityPermissionFlag flags; // 0x10
		::System::Void _ctor(::System::Security::Permissions::PermissionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISSUBSETOF_OFFSET))(this, a1);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_TOXML_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISEMPTY_OFFSET))(this);
		}

		::System::Security::Permissions::SecurityPermission* Cast(::System::Security::IPermission* a1)
		{
			return ((::System::Security::Permissions::SecurityPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CAST_OFFSET))(this, a1);
		}

	};
}
