#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIBPTaskRewardRowItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define GCJHLKCDFGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18132060)
#define GCJHLKCDFGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18131F20)
#define GCJHLKCDFGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18131BB0)
#define GCJHLKCDFGM__CTOR_OFFSET UNITYSDK_OFFSET(0x18132050)

inline static constexpr unsigned int GCJHLKCDFGM_TypeDefinitionIndex = 82950;

class GCJHLKCDFGM : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIBPTaskRewardRowItemWidgetController*>* IOOKGKGCNNP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* FGEGEFHPLOK; // 0x28
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EDMMFOCLCBM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JIIEJFHCDKH; // 0x48
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x50
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x58
	::FGCOIBFFCHB* INFBNMGLNMI; // 0x60
	::UnityEngine::Transform* FIOPMNMJBCG; // 0x68
	::LGINJIKKBJA* IOIANILNPPI; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x78
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x80
	::UnityEngine::RectTransform* LHKLHBMPDPA; // 0x88
	::MoleMole::UIGeneralButtonController* CELMNIKJKFO; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* LIPEGBMCMJE; // 0x98
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0xA0
	::MoleMole::MonoGamepadSelectable* PDPNANJGPKH; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJHLKCDFGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCJHLKCDFGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJHLKCDFGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCJHLKCDFGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
