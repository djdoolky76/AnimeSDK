#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOKFPNKJOON_JFOEAFEPHNA;
class FAKIACDIKOP;
class GDCLGFPAMDH;

#define AOKFPNKJOON_APANLHIDDIG_ACKDHNLOECO_OFFSET UNITYSDK_OFFSET(0x1821DC90)
#define AOKFPNKJOON_APANLHIDDIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1821DC80)

inline static constexpr unsigned int AOKFPNKJOON_APANLHIDDIG_TypeDefinitionIndex = 51461;

class AOKFPNKJOON_APANLHIDDIG : public ::System::Object
{
public:
	::GDCLGFPAMDH* NEMKJPLPOKD; // 0x10
	::AOKFPNKJOON_JFOEAFEPHNA* FGBNBFHOKAA; // 0x18
	::FAKIACDIKOP* GLAOEHCGCFO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_APANLHIDDIG__CTOR_OFFSET))(this);
	}

	::System::Void ACKDHNLOECO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_APANLHIDDIG_ACKDHNLOECO_OFFSET))(this);
	}
};
