#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET UNITYSDK_OFFSET(0x3C5BA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3C5C0A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x3C5BA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET UNITYSDK_OFFSET(0x3C5BA70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x3C5BC20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x3C5BD40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3C5C1A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C5BE80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CTOR_OFFSET UNITYSDK_OFFSET(0x3C5C000)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DES_TypeDefinitionIndex = 11666;

	class DES : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(DES_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(DES_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Boolean IsWeakKey(::Il2CppArray<::System::Byte>* B1D080F3192B401E)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET))(B1D080F3192B401E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CTOR_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Boolean IsSemiWeakKey(::Il2CppArray<::System::Byte>* B1D080F3192B401E)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET))(B1D080F3192B401E);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET))(this);
		}

		static ::System::UInt64 QuadWordFromBigEndian(::Il2CppArray<::System::Byte>* A6B5840567522F01)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET))(A6B5840567522F01);
		}

		static ::System::Security::Cryptography::DES* Create()
		{
			return ((::System::Security::Cryptography::DES*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Byte>* B1D080F3192B401E)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET))(B1D080F3192B401E);
		}
	};
}
