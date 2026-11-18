#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/StorePermissionFlags.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x1EA9EF70)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x1EA9EFB0)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1EA9EEF0)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1EA9EFF0)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1EA9F030)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1EA9F070)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1EA9EF30)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1EA9F0B0)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA9EEB0)
#define SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9EE70)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int StorePermission_TypeDefinitionIndex = 4103;

	class StorePermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Security::Permissions::StorePermissionFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::StorePermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION__CTOR_1_OFFSET))(this, flag);
		}

		::System::Security::Permissions::StorePermissionFlags get_Flags()
		{
			return ((::System::Security::Permissions::StorePermissionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Security::Permissions::StorePermissionFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::StorePermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_COPY_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_STOREPERMISSION_TOXML_OFFSET))(this);
		}
	};
}
