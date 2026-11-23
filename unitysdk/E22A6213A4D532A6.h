#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define E22A6213A4D532A6_B6F6CA9153F62154_OFFSET UNITYSDK_OFFSET(0x3B4D1D0)
#define E22A6213A4D532A6_B8CB1EE4B625C807_OFFSET UNITYSDK_OFFSET(0x3B4D170)
#define E22A6213A4D532A6_BAC0AD195F4D9DA3_OFFSET UNITYSDK_OFFSET(0x3B4D110)
#define E22A6213A4D532A6_BEEB935D3EB704F0_OFFSET UNITYSDK_OFFSET(0x3B4D230)

inline static constexpr unsigned int E22A6213A4D532A6_TypeDefinitionIndex = 10265;

class E22A6213A4D532A6 : public ::System::Object
{
public:
	static ::System::Exception* B6F6CA9153F62154()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E22A6213A4D532A6_B6F6CA9153F62154_OFFSET))();
	}

	static ::System::Exception* B8CB1EE4B625C807()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E22A6213A4D532A6_B8CB1EE4B625C807_OFFSET))();
	}

	static ::System::Exception* BEEB935D3EB704F0()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E22A6213A4D532A6_BEEB935D3EB704F0_OFFSET))();
	}

	static ::System::Exception* BAC0AD195F4D9DA3()
	{
		return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + E22A6213A4D532A6_BAC0AD195F4D9DA3_OFFSET))();
	}
};
