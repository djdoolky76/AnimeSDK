#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define HKMDOAMKNEK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E648B0)
#define HKMDOAMKNEK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E64700)
#define HKMDOAMKNEK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E64390)
#define HKMDOAMKNEK__CTOR_OFFSET UNITYSDK_OFFSET(0x12E648A0)

inline static constexpr unsigned int HKMDOAMKNEK_TypeDefinitionIndex = 39974;

class HKMDOAMKNEK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NPHIMEGPMKP; // 0x18
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* AEPPANPBCLI; // 0x30
	::LGINJIKKBJA* IBGHKGKHGAE; // 0x38
	::LGINJIKKBJA* BKDDKDMILCA; // 0x40
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* CKHKPHBKAOJ; // 0x58
	::UnityEngine::GameObject* PCDOCJAGIBF; // 0x60
	::LGINJIKKBJA* CKDCICBPNMI; // 0x68
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x70
	::LGINJIKKBJA* LKJIIHJNGKC; // 0x78
	::MEKABAIJMNM_1<::MoleMole::UICinemaRewardLevelWidgetController*>* CJCDFGIFMAL; // 0x80
	::MoleMole::UIGeneralButtonController* DPKILHBHLGM; // 0x88
	::KNLFLMMHALL_1<::System::Object*>* DLNKDBJMLEL; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMDOAMKNEK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKMDOAMKNEK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKMDOAMKNEK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMDOAMKNEK_KGEBDLGBGNM_OFFSET))(this);
	}
};
