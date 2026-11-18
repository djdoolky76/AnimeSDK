#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JIBBPFOJGGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18A17480)
#define JIBBPFOJGGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18A172F0)
#define JIBBPFOJGGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18A16FA0)
#define JIBBPFOJGGM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A17470)

inline static constexpr unsigned int JIBBPFOJGGM_TypeDefinitionIndex = 56183;

class JIBBPFOJGGM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x18
	::FGCOIBFFCHB* CECDFLCFMJE; // 0x20
	::UnityEngine::GameObject* ODKGAHDFMAP; // 0x28
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ELDMFHANEPL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JEKNPGOODOJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MMOGJMMBDGM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DCPAEHBKAKE; // 0x50
	::UnityEngine::RectTransform* PPKJFBMIMLN; // 0x58
	::UnityEngine::RectTransform* LEGFPINNANJ; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* ECJHBBIFIFK; // 0x68
	::LGINJIKKBJA* IIEDFAKIBFJ; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* AOAEMBFBBCM; // 0x78
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x80
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x88
	::FGCOIBFFCHB* DMANKFMDFCD; // 0x90
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x98
	::FGCOIBFFCHB* ANEEEIBEEPJ; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBPFOJGGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIBBPFOJGGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBPFOJGGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIBBPFOJGGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
