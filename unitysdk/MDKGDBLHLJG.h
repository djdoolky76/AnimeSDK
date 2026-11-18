#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MDKGDBLHLJG_DLEGGAJNLBH_OFFSET UNITYSDK_OFFSET(0x18529800)
#define MDKGDBLHLJG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x185296A0)
#define MDKGDBLHLJG_HEOJPOIPIDC_OFFSET UNITYSDK_OFFSET(0x185297F0)
#define MDKGDBLHLJG_HNBCPGBBNJD_OFFSET UNITYSDK_OFFSET(0x185297E0)
#define MDKGDBLHLJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x185295F0)
#define MDKGDBLHLJG_OLMFFNIIDHK_OFFSET UNITYSDK_OFFSET(0x18529810)
#define MDKGDBLHLJG__CTOR_OFFSET UNITYSDK_OFFSET(0x18521560)

inline static constexpr unsigned int MDKGDBLHLJG_TypeDefinitionIndex = 48586;

class MDKGDBLHLJG : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::CanvasGroup* _OMJMGDIJLIK_k__BackingField; // 0x28
	::UnityEngine::RectTransform* _ABNBGJPHGCH_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKGDBLHLJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MDKGDBLHLJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::RectTransform* HNBCPGBBNJD()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKGDBLHLJG_HNBCPGBBNJD_OFFSET))(this);
	}

	::System::Void HEOJPOIPIDC(::UnityEngine::CanvasGroup* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + MDKGDBLHLJG_HEOJPOIPIDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKGDBLHLJG_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::CanvasGroup* DLEGGAJNLBH()
	{
		return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKGDBLHLJG_DLEGGAJNLBH_OFFSET))(this);
	}

	::System::Void OLMFFNIIDHK(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MDKGDBLHLJG_OLMFFNIIDHK_OFFSET))(this, EGEGIMGMJHN);
	}
};
