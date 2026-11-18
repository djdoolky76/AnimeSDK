#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCKMLIHDOIL;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define BPNGLLLIMDC_NAIPELDACHH_KHMPIOKBOKE_OFFSET UNITYSDK_OFFSET(0x1685C490)
#define BPNGLLLIMDC_NAIPELDACHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1685C480)

inline static constexpr unsigned int BPNGLLLIMDC_NAIPELDACHH_TypeDefinitionIndex = 56034;

class BPNGLLLIMDC_NAIPELDACHH : public ::System::Object
{
public:
	::System::Action_1<::CCKMLIHDOIL*>* IGAAKDOIPNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_NAIPELDACHH__CTOR_OFFSET))(this);
	}

	::System::Void KHMPIOKBOKE(::OAEFGCLEHHO* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_NAIPELDACHH_KHMPIOKBOKE_OFFSET))(this, JBNBMFNNELP);
	}
};
