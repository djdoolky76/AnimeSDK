#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlModification.h"
#include "unitysdk/System/Security/AccessControl/ObjectSecurity.h"

namespace System::Security::AccessControl { class AccessRule; }
namespace System::Security::AccessControl { class AuditRule; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1E0EE890)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1E0EEE10)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYACCESS_OFFSET UNITYSDK_OFFSET(0x1E0EE8B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYAUDIT_OFFSET UNITYSDK_OFFSET(0x1E0EEE30)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULEALL_OFFSET UNITYSDK_OFFSET(0x1E0EED50)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1E0EED80)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1E0EED20)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULEALL_OFFSET UNITYSDK_OFFSET(0x1E0EF240)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1E0EF270)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1E0EF210)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_RESETACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1E0EEDB0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1E0EEDE0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1E0EF2A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EE880)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonObjectSecurity_TypeDefinitionIndex = 977;

	class CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity
	{
	public:
		::System::Void _ctor(::System::Boolean isContainer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY__CTOR_OFFSET))(this, isContainer);
		}

		::System::Void AddAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDACCESSRULE_OFFSET))(this, rule);
		}

		::System::Boolean RemoveAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULE_OFFSET))(this, rule);
		}

		::System::Void RemoveAccessRuleAll(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULEALL_OFFSET))(this, rule);
		}

		::System::Void RemoveAccessRuleSpecific(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULESPECIFIC_OFFSET))(this, rule);
		}

		::System::Void ResetAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_RESETACCESSRULE_OFFSET))(this, rule);
		}

		::System::Void SetAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETACCESSRULE_OFFSET))(this, rule);
		}

		::System::Boolean ModifyAccess(::System::Security::AccessControl::AccessControlModification modification, ::System::Security::AccessControl::AccessRule* rule, ::System::Boolean& modified)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessControlModification, ::System::Security::AccessControl::AccessRule*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYACCESS_OFFSET))(this, modification, rule, modified);
		}

		::System::Void AddAuditRule(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDAUDITRULE_OFFSET))(this, rule);
		}

		::System::Boolean RemoveAuditRule(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULE_OFFSET))(this, rule);
		}

		::System::Void RemoveAuditRuleAll(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULEALL_OFFSET))(this, rule);
		}

		::System::Void RemoveAuditRuleSpecific(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULESPECIFIC_OFFSET))(this, rule);
		}

		::System::Void SetAuditRule(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETAUDITRULE_OFFSET))(this, rule);
		}

		::System::Boolean ModifyAudit(::System::Security::AccessControl::AccessControlModification modification, ::System::Security::AccessControl::AuditRule* rule, ::System::Boolean& modified)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessControlModification, ::System::Security::AccessControl::AuditRule*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYAUDIT_OFFSET))(this, modification, rule, modified);
		}
	};
}
