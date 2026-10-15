#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_E1A5E202CA41D5D1_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1C000560)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_E1A5E202CA41D5D1_KEY_OFFSET UNITYSDK_OFFSET(0x1BFFF0F0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyBuilder_E1A5E202CA41D5D1_TypeDefinitionIndex = 2301;

	class KeyBuilder_E1A5E202CA41D5D1 : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)UnitySDK::FromName("Mono.Security.Cryptography", "KeyBuilder")->GetStaticField(0x25460);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_E1A5E202CA41D5D1_GET_RNG_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Key(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_E1A5E202CA41D5D1_KEY_OFFSET))(a1);
		}

	};
}
