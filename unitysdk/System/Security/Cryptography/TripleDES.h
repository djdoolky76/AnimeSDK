#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET UNITYSDK_OFFSET(0x3C1F7F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_EQUALBYTES_OFFSET UNITYSDK_OFFSET(0x3C1F840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x3C1FE30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x3C1FAA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x3C1FAC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x3C1FF00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C1FC10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CTOR_OFFSET UNITYSDK_OFFSET(0x3C1FD90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDES_TypeDefinitionIndex = 11462;

	class TripleDES : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(TripleDES_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(TripleDES_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_SET_KEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_GET_KEY_OFFSET))(this);
		}

		static ::System::Security::Cryptography::TripleDES* Create()
		{
			return ((::System::Security::Cryptography::TripleDES*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_CREATE_OFFSET))();
		}

		static ::System::Boolean EqualBytes(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::System::Int32 FA2B0DA40267CBE8, ::System::Int32 B2F90A71365E6EF8, ::System::Int32 A70E5C58B2C7A692)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_EQUALBYTES_OFFSET))(B1D080F3192B401E, FA2B0DA40267CBE8, B2F90A71365E6EF8, A70E5C58B2C7A692);
		}

		static ::System::Boolean IsWeakKey(::Il2CppArray<::System::Byte>* B1D080F3192B401E)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISWEAKKEY_OFFSET))(B1D080F3192B401E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Byte>* B1D080F3192B401E)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDES_ISLEGALKEYSIZE_OFFSET))(B1D080F3192B401E);
		}
	};
}
