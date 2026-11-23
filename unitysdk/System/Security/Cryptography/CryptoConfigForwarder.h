#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIGFORWARDER_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x3BC0210)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConfigForwarder_TypeDefinitionIndex = 11225;

	class CryptoConfigForwarder : public ::System::Object
	{
	public:
		static ::System::Object* CreateFromName(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIGFORWARDER_CREATEFROMNAME_OFFSET))(F79B4D487F303AB2);
		}
	};
}
