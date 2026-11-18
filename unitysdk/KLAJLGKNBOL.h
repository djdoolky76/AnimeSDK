#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KLAJLGKNBOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD4002B0)
#define KLAJLGKNBOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD4001A0)
#define KLAJLGKNBOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD3FFFA0)
#define KLAJLGKNBOL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4002A0)

inline static constexpr unsigned int KLAJLGKNBOL_TypeDefinitionIndex = 78853;

class KLAJLGKNBOL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EGOGIKEAOIF; // 0x18
	::UnityEngine::RectTransform* ABHOCBJBPLC; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::FILNFMCNCFE* FEDNNICLDDB; // 0x30
	::MoleMole::UIGeneralButtonController* BENHPPALOIG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PEOKAKGIFIG; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAJLGKNBOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLAJLGKNBOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAJLGKNBOL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLAJLGKNBOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
