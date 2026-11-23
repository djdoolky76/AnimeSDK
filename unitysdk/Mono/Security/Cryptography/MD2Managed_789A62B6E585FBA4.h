#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD2_96C1C30290C9BD8F.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_HASHCORE_OFFSET UNITYSDK_OFFSET(0x3B37A50)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x3B37B50)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x3B37CB0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x3B37D20)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_PADDING_OFFSET UNITYSDK_OFFSET(0x3B38020)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B380B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4__CTOR_OFFSET UNITYSDK_OFFSET(0x3B38140)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_789A62B6E585FBA4_TypeDefinitionIndex = 19346;

	class MD2Managed_789A62B6E585FBA4 : public ::Mono::Security::Cryptography::MD2_96C1C30290C9BD8F
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_PI_SUBST()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MD2Managed_789A62B6E585FBA4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Byte>* state; // 0x28
		::Il2CppArray<::System::Byte>* checksum; // 0x30
		::Il2CppArray<::System::Byte>* buffer; // 0x38
		::System::Int32 count; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* x; // 0x48

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 A3BAF33B853DA79C)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_PADDING_OFFSET))(this, A3BAF33B853DA79C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* EDF8D5B13A3EE433, ::System::Int32 A985F8C5DF08C68A, ::System::Int32 B1F2419A701C8F03)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_HASHCORE_OFFSET))(this, EDF8D5B13A3EE433, A985F8C5DF08C68A, B1F2419A701C8F03);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_HASHFINAL_OFFSET))(this);
		}

		::System::Void MD2Transform(::Il2CppArray<::System::Byte>* E5EB06E4FD2C32F7, ::Il2CppArray<::System::Byte>* A098F377A798CEF5, ::Il2CppArray<::System::Byte>* A6B5840567522F01, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_789A62B6E585FBA4_MD2TRANSFORM_OFFSET))(this, E5EB06E4FD2C32F7, A098F377A798CEF5, A6B5840567522F01, B48C66E5FB2449C6);
		}
	};
}
