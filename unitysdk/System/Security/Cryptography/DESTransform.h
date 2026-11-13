#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET UNITYSDK_OFFSET(0x1AF10C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF11110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET UNITYSDK_OFFSET(0x1AF106F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0F300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x1AF11090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x1AF0FD10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET UNITYSDK_OFFSET(0x1AF10920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x1AF10CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET UNITYSDK_OFFSET(0x1AF10050)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESTransform_TypeDefinitionIndex = 1075;

	class DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		::Il2CppArray<::System::UInt32>* dwordBuff; // 0x50
		::Il2CppArray<::System::Byte>* keySchedule; // 0x58
		::Il2CppArray<::System::Byte>* byteBuff; // 0x60
		static ::Il2CppArray<::System::UInt32>** StaticGet_spBoxes()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x13530);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_PC2()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x13538);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_PC1()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x13540);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_fpTab()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x13548);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_leftRotTotal()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x13550);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_ipTab()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x13558);
		}

		static ::System::Int32* StaticGet_KEY_BYTE_SIZE()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x3E00);
		}

		static ::System::Int32* StaticGet_BLOCK_BYTE_SIZE()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x3E04);
		}

		static ::System::Int32* StaticGet_KEY_BIT_SIZE()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x3E08);
		}

		static ::System::Int32* StaticGet_BLOCK_BIT_SIZE()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Security.Cryptography", "DESTransform")->GetStaticField(0x3E0C);
		}

		::System::Void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* a1, ::System::Boolean a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CCTOR_OFFSET))();
		}

		::System::UInt32 CipherFunct(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET))(this, a1, a2);
		}

		static ::System::Void Permutation(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BSwap(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET))(a1);
		}

		::System::Void SetKey(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET))(this, a1);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* GetStrongKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET))();
		}

	};
}
