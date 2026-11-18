#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD2_02B2808D383A0FEC.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1FBC3F20)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1FBC4340)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBC3EC0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FBC4000)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_PADDING_OFFSET UNITYSDK_OFFSET(0x1FBC3CB0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBC4530)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC3DE0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_9354D02190723910_TypeDefinitionIndex = 2456;

	class MD2Managed_9354D02190723910 : public ::Mono::Security::Cryptography::MD2_02B2808D383A0FEC
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_PI_SUBST()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MD2Managed_9354D02190723910_TypeDefinitionIndex)->GetStaticField(0x2550);
		}
		::Il2CppArray<::System::Byte>* state; // 0x28
		::Il2CppArray<::System::Byte>* checksum; // 0x30
		::Il2CppArray<::System::Byte>* x; // 0x38
		::Il2CppArray<::System::Byte>* buffer; // 0x40
		::System::Int32 count; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 nLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_PADDING_OFFSET))(this, nLength);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_HASHFINAL_OFFSET))(this);
		}

		::System::Void MD2Transform(::Il2CppArray<::System::Byte>* state, ::Il2CppArray<::System::Byte>* checksum, ::Il2CppArray<::System::Byte>* block, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_9354D02190723910_MD2TRANSFORM_OFFSET))(this, state, checksum, block, index);
		}
	};
}
