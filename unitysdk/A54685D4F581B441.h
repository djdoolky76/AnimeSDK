#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class NotImplementedException; }
namespace System { class NotSupportedException; }
namespace System::Net { class WebException; }

#define A54685D4F581B441_A718A19615C2E616_OFFSET UNITYSDK_OFFSET(0x3DF3310)
#define A54685D4F581B441_B2949B45663373B0_OFFSET UNITYSDK_OFFSET(0x3DF3130)
#define A54685D4F581B441_B84C73287FADBE41_OFFSET UNITYSDK_OFFSET(0x3DF30C0)
#define A54685D4F581B441_BBAE5306EA23615A_OFFSET UNITYSDK_OFFSET(0x3DF31A0)
#define A54685D4F581B441_F0606078796A2923_OFFSET UNITYSDK_OFFSET(0x3DF3210)

inline static constexpr unsigned int A54685D4F581B441_TypeDefinitionIndex = 14652;

class A54685D4F581B441 : public ::System::Object
{
public:
	static ::System::NotImplementedException* B2949B45663373B0()
	{
		return ((::System::NotImplementedException*(*)())((::PBYTE)hIl2Cpp + A54685D4F581B441_B2949B45663373B0_OFFSET))();
	}

	static ::System::Net::WebException* F0606078796A2923()
	{
		return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + A54685D4F581B441_F0606078796A2923_OFFSET))();
	}

	static ::System::Net::WebException* A718A19615C2E616()
	{
		return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + A54685D4F581B441_A718A19615C2E616_OFFSET))();
	}

	static ::System::NotSupportedException* BBAE5306EA23615A()
	{
		return ((::System::NotSupportedException*(*)())((::PBYTE)hIl2Cpp + A54685D4F581B441_BBAE5306EA23615A_OFFSET))();
	}

	static ::System::NotImplementedException* B84C73287FADBE41()
	{
		return ((::System::NotImplementedException*(*)())((::PBYTE)hIl2Cpp + A54685D4F581B441_B84C73287FADBE41_OFFSET))();
	}
};
