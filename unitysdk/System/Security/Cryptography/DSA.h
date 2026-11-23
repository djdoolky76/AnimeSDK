#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricAlgorithm.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET UNITYSDK_OFFSET(0x3B46F60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3B46FB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3B47990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSA_TypeDefinitionIndex = 10287;

	class DSA : public ::System::Security::Cryptography::AsymmetricAlgorithm
	{
	public:
		static ::System::Security::Cryptography::DSA* Create()
		{
			return ((::System::Security::Cryptography::DSA*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_CREATE_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA__CTOR_OFFSET))(this);
		}

		::System::Void FromXmlString(::System::String* ED4509AD4A414C3C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_FROMXMLSTRING_OFFSET))(this, ED4509AD4A414C3C);
		}

		::System::String* ToXmlString(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSA_TOXMLSTRING_OFFSET))(this, A8C4FBC67474989C);
		}
	};
}
