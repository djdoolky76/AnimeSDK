#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CryptographicException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C3D3F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B71B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C3D410)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptographicUnexpectedOperationException_TypeDefinitionIndex = 11605;

	class CryptographicUnexpectedOperationException : public ::System::Security::Cryptography::CryptographicException
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
