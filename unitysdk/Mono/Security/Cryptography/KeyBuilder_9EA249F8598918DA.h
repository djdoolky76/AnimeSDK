#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_9EA249F8598918DA_GET_RNG_OFFSET UNITYSDK_OFFSET(0x3B37980)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_9EA249F8598918DA_KEY_OFFSET UNITYSDK_OFFSET(0x3B378B0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_9EA249F8598918DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyBuilder_9EA249F8598918DA_TypeDefinitionIndex = 19347;

	class KeyBuilder_9EA249F8598918DA : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(KeyBuilder_9EA249F8598918DA_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_9EA249F8598918DA_GET_RNG_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_9EA249F8598918DA__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* Key(::System::Int32 F54AF627638DE3C9)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_9EA249F8598918DA_KEY_OFFSET))(F54AF627638DE3C9);
		}
	};
}
