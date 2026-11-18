#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1FD36A30)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5_IV_OFFSET UNITYSDK_OFFSET(0x1FD36B50)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5_KEY_OFFSET UNITYSDK_OFFSET(0x1FD36AA0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD36A20)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyBuilder_36669BACD14E09B5_TypeDefinitionIndex = 2448;

	class KeyBuilder_36669BACD14E09B5 : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(KeyBuilder_36669BACD14E09B5_TypeDefinitionIndex)->GetStaticField(0x2470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5_GET_RNG_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Key(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5_KEY_OFFSET))(size);
		}

		static ::Il2CppArray<::System::Byte>* IV(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_36669BACD14E09B5_IV_OFFSET))(size);
		}
	};
}
