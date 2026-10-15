#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1C046190)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_IV_OFFSET UNITYSDK_OFFSET(0x1C0461E0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_KEY_OFFSET UNITYSDK_OFFSET(0x1C0425F0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyBuilder_TypeDefinitionIndex = 65;

	class KeyBuilder : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)UnitySDK::FromName("Mono.Security.Cryptography", "KeyBuilder")->GetStaticField(0xB730);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_GET_RNG_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Key(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_KEY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* IV(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_IV_OFFSET))(a1);
		}

	};
}
