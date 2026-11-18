#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define GPOJGBOMBKJ_BHBMGEPAHFB_GPNOLHNIAHF_OFFSET UNITYSDK_OFFSET(0x125F0EA0)
#define GPOJGBOMBKJ_BHBMGEPAHFB_KPJOHFMLMCA_OFFSET UNITYSDK_OFFSET(0x125F0F00)
#define GPOJGBOMBKJ_BHBMGEPAHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x125F0E90)

inline static constexpr unsigned int GPOJGBOMBKJ_BHBMGEPAHFB_TypeDefinitionIndex = 46919;

class GPOJGBOMBKJ_BHBMGEPAHFB : public ::System::Object
{
public:
	::System::Action_1<::CFMGIKJLMBJ*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::CFMGIKJLMBJ*>* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_BHBMGEPAHFB__CTOR_OFFSET))(this);
	}

	::System::Void GPNOLHNIAHF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_BHBMGEPAHFB_GPNOLHNIAHF_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void KPJOHFMLMCA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_BHBMGEPAHFB_KPJOHFMLMCA_OFFSET))(this, BHDNBGLCNOM);
	}
};
