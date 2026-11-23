#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMOIDVALUE_OFFSET UNITYSDK_OFFSET(0x3E73AC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x3E73D60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3865790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3E73C30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18D5180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET UNITYSDK_OFFSET(0x3E73CD0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Oid_TypeDefinitionIndex = 14894;

	class Oid : public ::System::Object
	{
	public:
		::System::String* _value; // 0x10
		::System::String* _friendlyName; // 0x18
		::System::Security::Cryptography::OidGroup _group; // 0x20

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* E91257C7E44715B6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_OFFSET))(this, E91257C7E44715B6);
		}

		static ::System::Security::Cryptography::Oid* FromOidValue(::System::String* BA6421D45CA70A31, ::System::Security::Cryptography::OidGroup BCECAFDA9510556A)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMOIDVALUE_OFFSET))(BA6421D45CA70A31, BCECAFDA9510556A);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* E937D4885DAA1AE8, ::System::String* A5F0C457FA1F1A21, ::System::Security::Cryptography::OidGroup BCECAFDA9510556A)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Security::Cryptography::OidGroup))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_2_OFFSET))(this, E937D4885DAA1AE8, A5F0C457FA1F1A21, BCECAFDA9510556A);
		}

		::System::Void _ctor_3(::System::Security::Cryptography::Oid* E91257C7E44715B6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_3_OFFSET))(this, E91257C7E44715B6);
		}

		::System::Void _ctor_4(::System::String* E937D4885DAA1AE8, ::System::String* A5F0C457FA1F1A21)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID__CTOR_4_OFFSET))(this, E937D4885DAA1AE8, A5F0C457FA1F1A21);
		}
	};
}
