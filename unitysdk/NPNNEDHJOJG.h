#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralTokenWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define NPNNEDHJOJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F457B0)
#define NPNNEDHJOJG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F45690)
#define NPNNEDHJOJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F45310)
#define NPNNEDHJOJG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F457A0)

inline static constexpr unsigned int NPNNEDHJOJG_TypeDefinitionIndex = 42954;

class NPNNEDHJOJG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NPLJLLOJMAD; // 0x18
	::UnityEngine::GameObject* GPCNLECBJHG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CJNHJBOHDGO; // 0x28
	::MoleMole::MonoGamepadModule* KGKDOAJBIPJ; // 0x30
	::UnityEngine::GameObject* FMLBBMDCJBN; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* BJAJCBNMNLD; // 0x40
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x48
	::UnityEngine::RectTransform* FFKLNPPIJPG; // 0x50
	::UnityEngine::GameObject* HHFCFOBODHB; // 0x58
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x60
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIGeneralTokenWidgetController*>* MGNMDOHOOFH; // 0x70
	::KNLFLMMHALL_1<::System::Object*>* LDBFHDNHAEA; // 0x78
	::MonoUITableScrollV2* DKIAABMDFOK; // 0x80
	::MoleMole::UIGeneralButtonController* FOPKMGHGACF; // 0x88
	::LGINJIKKBJA* JDMMGAMPIKL; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNEDHJOJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPNNEDHJOJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPNNEDHJOJG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNEDHJOJG_KGEBDLGBGNM_OFFSET))(this);
	}
};
