#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KIGGHAOMCGP_BAFPCGECDFP_OFFSET UNITYSDK_OFFSET(0x15B8EC90)
#define KIGGHAOMCGP_EMHBJPCKJGM_OFFSET UNITYSDK_OFFSET(0x15B8F520)
#define KIGGHAOMCGP_GGCCGGBDNAB_1_OFFSET UNITYSDK_OFFSET(0x15B8F2B0)
#define KIGGHAOMCGP_GGCCGGBDNAB_OFFSET UNITYSDK_OFFSET(0x15B8EFA0)
#define KIGGHAOMCGP_LFBNNEHNIIF_OFFSET UNITYSDK_OFFSET(0x15B8EE90)

inline static constexpr unsigned int KIGGHAOMCGP_TypeDefinitionIndex = 77491;

class KIGGHAOMCGP : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 BAFPCGECDFP(::System::Single FNIOPKPHDEH, ::UnityEngine::Vector3 LCDLAKOLLJJ, ::UnityEngine::Vector3 LBOICOIDEIH, ::UnityEngine::Vector3 FNHMFKEOFJO, ::UnityEngine::Vector3 NHJHDMPGAFK)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIGGHAOMCGP_BAFPCGECDFP_OFFSET))(FNIOPKPHDEH, LCDLAKOLLJJ, LBOICOIDEIH, FNHMFKEOFJO, NHJHDMPGAFK);
	}

	static ::UnityEngine::Vector3 GGCCGGBDNAB(::System::Single IMLLDOHDCNC, ::UnityEngine::Vector3 GMHFKOELHPL, ::UnityEngine::Vector3 DIFAIJKOIPG, ::UnityEngine::Vector3 ALJIAJABAKK, ::UnityEngine::Vector3 PKIEMILGBDH, ::UnityEngine::Vector3 EBJLKMEEJFF, ::UnityEngine::Vector3 BPDGJKCPGNB)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIGGHAOMCGP_GGCCGGBDNAB_OFFSET))(IMLLDOHDCNC, GMHFKOELHPL, DIFAIJKOIPG, ALJIAJABAKK, PKIEMILGBDH, EBJLKMEEJFF, BPDGJKCPGNB);
	}

	static ::UnityEngine::Vector3 GGCCGGBDNAB_1(::System::Single IMLLDOHDCNC, ::UnityEngine::Vector3 GMHFKOELHPL, ::UnityEngine::Vector3 DIFAIJKOIPG, ::UnityEngine::Vector3 ALJIAJABAKK, ::UnityEngine::Vector3 PKIEMILGBDH, ::UnityEngine::Vector3 EBJLKMEEJFF)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIGGHAOMCGP_GGCCGGBDNAB_1_OFFSET))(IMLLDOHDCNC, GMHFKOELHPL, DIFAIJKOIPG, ALJIAJABAKK, PKIEMILGBDH, EBJLKMEEJFF);
	}

	static ::UnityEngine::Vector3 LFBNNEHNIIF(::System::Single FNIOPKPHDEH, ::UnityEngine::Vector3& LCDLAKOLLJJ, ::UnityEngine::Vector3& LBOICOIDEIH, ::UnityEngine::Vector3& FNHMFKEOFJO)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + KIGGHAOMCGP_LFBNNEHNIIF_OFFSET))(FNIOPKPHDEH, LCDLAKOLLJJ, LBOICOIDEIH, FNHMFKEOFJO);
	}

	static ::UnityEngine::Vector3 EMHBJPCKJGM(::System::Single FNIOPKPHDEH, ::UnityEngine::Vector3 LCDLAKOLLJJ, ::UnityEngine::Vector3 LBOICOIDEIH, ::UnityEngine::Vector3 FNHMFKEOFJO)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIGGHAOMCGP_EMHBJPCKJGM_OFFSET))(FNIOPKPHDEH, LCDLAKOLLJJ, LBOICOIDEIH, FNHMFKEOFJO);
	}
};
