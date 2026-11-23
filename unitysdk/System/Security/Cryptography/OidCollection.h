#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography { class OidEnumerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x3E52770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3E52850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E90040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3E52B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x3E528B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3E52850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3E52AE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidCollection_TypeDefinitionIndex = 14864;

	class OidCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* _list; // 0x10

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, EDF8D5B13A3EE433, B48C66E5FB2449C6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::Oid* get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Security::Cryptography::OidEnumerator* GetEnumerator()
		{
			return ((::System::Security::Cryptography::OidEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Security::Cryptography::Oid* E91257C7E44715B6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::Cryptography::Oid*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_ADD_OFFSET))(this, E91257C7E44715B6);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OIDCOLLECTION_GET_COUNT_OFFSET))(this);
		}
	};
}
