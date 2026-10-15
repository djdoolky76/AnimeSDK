#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD2.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C048D60)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0485F0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1C048820)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1C048BC0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0487C0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C048900)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x1C0486B0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_TypeDefinitionIndex = 68;

	class MD2Managed : public ::Mono::Security::Cryptography::MD2
	{
	public:
		::Il2CppArray<::System::Byte>* checksum; // 0x28
		::Il2CppArray<::System::Byte>* x; // 0x30
		::Il2CppArray<::System::Byte>* buffer; // 0x38
		::Il2CppArray<::System::Byte>* state; // 0x40
		::System::Int32 count; // 0x48
		static ::Il2CppArray<::System::Byte>** StaticGet_PI_SUBST()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "MD2Managed")->GetStaticField(0xBE30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void MD2Transform(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
