#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD2.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET UNITYSDK_OFFSET(0x3C83BA0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x3C83CA0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x3B37CB0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x3C83E00)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET UNITYSDK_OFFSET(0x3C84100)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C84190)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x3C84220)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_TypeDefinitionIndex = 10383;

	class MD2Managed : public ::Mono::Security::Cryptography::MD2
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_PI_SUBST()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MD2Managed_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Byte>* state; // 0x28
		::Il2CppArray<::System::Byte>* checksum; // 0x30
		::Il2CppArray<::System::Byte>* buffer; // 0x38
		::System::Int32 count; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* x; // 0x48

		::System::Void MD2Transform(::Il2CppArray<::System::Byte>* E5EB06E4FD2C32F7, ::Il2CppArray<::System::Byte>* A098F377A798CEF5, ::Il2CppArray<::System::Byte>* A6B5840567522F01, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_MD2TRANSFORM_OFFSET))(this, E5EB06E4FD2C32F7, A098F377A798CEF5, A6B5840567522F01, B48C66E5FB2449C6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 A3BAF33B853DA79C)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_PADDING_OFFSET))(this, A3BAF33B853DA79C);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHFINAL_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* EDF8D5B13A3EE433, ::System::Int32 A985F8C5DF08C68A, ::System::Int32 B1F2419A701C8F03)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_HASHCORE_OFFSET))(this, EDF8D5B13A3EE433, A985F8C5DF08C68A, B1F2419A701C8F03);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_INITIALIZE_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED__CCTOR_OFFSET))();
		}
	};
}
