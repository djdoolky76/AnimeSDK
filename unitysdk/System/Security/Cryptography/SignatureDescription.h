#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1752F1C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1753C900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x1753C8E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1753C8F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x1753C8D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SignatureDescription_TypeDefinitionIndex = 1063;

	class SignatureDescription : public ::System::Object
	{
	public:
		::System::String* _strDigest; // 0x10
		::System::String* _strKey; // 0x18
		::System::String* _strDeformatter; // 0x20
		::System::String* _strFormatter; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_CTOR_OFFSET))(this);
		}

		::System::Void set_KeyAlgorithm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_KEYALGORITHM_OFFSET))(this, a1);
		}

		::System::Void set_DigestAlgorithm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DIGESTALGORITHM_OFFSET))(this, a1);
		}

		::System::Void set_FormatterAlgorithm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_FORMATTERALGORITHM_OFFSET))(this, a1);
		}

		::System::Void set_DeformatterAlgorithm(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SIGNATUREDESCRIPTION_SET_DEFORMATTERALGORITHM_OFFSET))(this, a1);
		}

	};
}
