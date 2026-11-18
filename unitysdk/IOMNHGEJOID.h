#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoScrollBarEx;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOMNHGEJOID_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CA0D40)
#define IOMNHGEJOID_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CA0C40)
#define IOMNHGEJOID_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CA0990)
#define IOMNHGEJOID__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA0D30)

inline static constexpr unsigned int IOMNHGEJOID_TypeDefinitionIndex = 74401;

class IOMNHGEJOID : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IIANKFEACBO; // 0x18
	::UnityEngine::GameObject* PADAEFCCLBE; // 0x20
	::MoleMole::MonoGamepadSpaceList* KJKNOOHMPGN; // 0x28
	::UnityEngine::RectTransform* MBOMAKDCNGH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DKJHOHJEIEF; // 0x38
	::UnityEngine::RectTransform* NHAHMJOKDNP; // 0x40
	::LGINJIKKBJA* AKEDDMNCCEE; // 0x48
	::MonoUITableScrollV2* JNOEGHMGCMJ; // 0x50
	::LGINJIKKBJA* CLHICOFIMHL; // 0x58
	::LGINJIKKBJA* DGDJFDAPNPI; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* NJCPPNBDNID; // 0x68
	::MonoUITableScrollV2* OJJIIPPOJHH; // 0x70
	::LGINJIKKBJA* HODPPKHAJAG; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* DAKOCINNIJK; // 0x80
	::MonoScrollBarEx* FPNGFHPIHGA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMNHGEJOID__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOMNHGEJOID_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOMNHGEJOID_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMNHGEJOID_KGEBDLGBGNM_OFFSET))(this);
	}
};
