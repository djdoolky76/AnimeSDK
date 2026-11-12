#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"
namespace System::Security::Cryptography { class DES; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4E5D30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET UNITYSDK_OFFSET(0x1D4E5BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E5440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1D4E54A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1D4E5C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET UNITYSDK_OFFSET(0x1D4E5780)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET UNITYSDK_OFFSET(0x1D4E5680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1D4E5C90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1D4E5930)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DES_TypeDefinitionIndex = 1017;

	class DES : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("System.Security.Cryptography", "DES")->GetStaticField(0x24610);
		}

		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)UnitySDK::FromName("System.Security.Cryptography", "DES")->GetStaticField(0x24618);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_SET_KEY_OFFSET))(this, a1);
		}

		static ::System::Security::Cryptography::DES* Create()
		{
			return ((::System::Security::Cryptography::DES*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_CREATE_OFFSET))();
		}

		static ::System::Boolean IsWeakKey(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISWEAKKEY_OFFSET))(a1);
		}

		static ::System::Boolean IsSemiWeakKey(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISSEMIWEAKKEY_OFFSET))(a1);
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_ISLEGALKEYSIZE_OFFSET))(a1);
		}

		static ::System::UInt64 QuadWordFromBigEndian(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DES_QUADWORDFROMBIGENDIAN_OFFSET))(a1);
		}

	};
}
