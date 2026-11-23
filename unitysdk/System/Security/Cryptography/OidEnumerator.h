#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography { class OidCollection; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3EE3590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3EE3540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x27A9040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3EE3590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EE35C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3D551E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidEnumerator_TypeDefinitionIndex = 15172;

	class OidEnumerator : public ::System::Object
	{
	public:
		::System::Security::Cryptography::OidCollection* _oids; // 0x10
		::System::Int32 _current; // 0x18

		::System::Void _ctor(::System::Security::Cryptography::OidCollection* EF7E62DA33D71EE1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::OidCollection*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR__CTOR_OFFSET))(this, EF7E62DA33D71EE1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Security::Cryptography::Oid* get_Current()
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
