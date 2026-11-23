#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/KeyedHashAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class HashAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET UNITYSDK_OFFSET(0x3C43720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C43770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3C43DB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET UNITYSDK_OFFSET(0x3C43830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x3C438E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEKEY_OFFSET UNITYSDK_OFFSET(0x3C43A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x3C43B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3C43E30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_UPDATEIOPADBUFFERS_OFFSET UNITYSDK_OFFSET(0x3C43BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_OFFSET UNITYSDK_OFFSET(0x3C43DA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMAC_TypeDefinitionIndex = 11604;

	class HMAC : public ::System::Security::Cryptography::KeyedHashAlgorithm
	{
	public:
		::System::Int32 blockSizeValue; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* m_hashName; // 0x38
		::System::Security::Cryptography::HashAlgorithm* m_hash1; // 0x40
		::System::Security::Cryptography::HashAlgorithm* m_hash2; // 0x48
		::Il2CppArray<::System::Byte>* m_inner; // 0x50
		::Il2CppArray<::System::Byte>* m_outer; // 0x58
		::System::Boolean m_hashing; // 0x60

		::System::Void InitializeKey(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZEKEY_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* EFD90D39604601F6, ::System::Int32 F896FA2F29651D8B, ::System::Int32 ABCBCC5B21FA7C82)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHCORE_OFFSET))(this, EFD90D39604601F6, F896FA2F29651D8B, ABCBCC5B21FA7C82);
		}

		::System::Void UpdateIOPadBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_UPDATEIOPADBUFFERS_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_SET_KEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Security::Cryptography::HMAC* Create()
		{
			return ((::System::Security::Cryptography::HMAC*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_CREATE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC__CTOR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_GET_KEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMAC_INITIALIZE_OFFSET))(this);
		}
	};
}
