#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BF838EAF3DACDAFA.h"

class AkAudioListener;

#define AKAUDIOLISTENER_B30566467733E569_B98284D3039A3468_OFFSET UNITYSDK_OFFSET(0x2928E30)
#define AKAUDIOLISTENER_B30566467733E569_F77A2EEABE94D751_OFFSET UNITYSDK_OFFSET(0x2928D70)
#define AKAUDIOLISTENER_B30566467733E569__CTOR_OFFSET UNITYSDK_OFFSET(0x2928EF0)

inline static constexpr unsigned int AkAudioListener_B30566467733E569_TypeDefinitionIndex = 20471;

class AkAudioListener_B30566467733E569 : public ::AkAudioListener_BF838EAF3DACDAFA
{
public:
	::System::Boolean F77A2EEABE94D751(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_B30566467733E569_F77A2EEABE94D751_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Boolean B98284D3039A3468(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_B30566467733E569_B98284D3039A3468_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_B30566467733E569__CTOR_OFFSET))(this);
	}
};
