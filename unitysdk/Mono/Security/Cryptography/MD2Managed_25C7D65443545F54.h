#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD2_0A61A9ED600D8A6F.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C000D80)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_CTOR_OFFSET UNITYSDK_OFFSET(0x1C000610)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1C000840)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1C000BE0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0007E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_MD2TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C000920)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_PADDING_OFFSET UNITYSDK_OFFSET(0x1C0006D0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2Managed_25C7D65443545F54_TypeDefinitionIndex = 2303;

	class MD2Managed_25C7D65443545F54 : public ::Mono::Security::Cryptography::MD2_0A61A9ED600D8A6F
	{
	public:
		::Il2CppArray<::System::Byte>* state; // 0x28
		::Il2CppArray<::System::Byte>* checksum; // 0x30
		::Il2CppArray<::System::Byte>* x; // 0x38
		::Il2CppArray<::System::Byte>* buffer; // 0x40
		::System::Int32 count; // 0x48
		static ::Il2CppArray<::System::Byte>** StaticGet_PI_SUBST()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.Cryptography", "MD2Managed")->GetStaticField(0x25470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_PADDING_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_HASHFINAL_OFFSET))(this);
		}

		::System::Void MD2Transform(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2MANAGED_25C7D65443545F54_MD2TRANSFORM_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
