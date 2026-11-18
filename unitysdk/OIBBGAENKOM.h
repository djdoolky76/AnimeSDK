#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OIBBGAENKOM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F79360)
#define OIBBGAENKOM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F792B0)
#define OIBBGAENKOM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F79080)
#define OIBBGAENKOM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F79350)

inline static constexpr unsigned int OIBBGAENKOM_TypeDefinitionIndex = 50545;

class OIBBGAENKOM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NHFGBLBKOMF; // 0x18
	::UnityEngine::CanvasGroup* IFLPANCJHHG; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::UnityEngine::GameObject* HBPOGNEJLDE; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::UnityEngine::Transform* FJGPOOLCOEP; // 0x40
	::UnityEngine::RectTransform* KBNHFJFKKPK; // 0x48
	::UnityEngine::RectTransform* HGKANNMDNMI; // 0x50
	::UnityEngine::RectTransform* EHPOIMNPHOH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBGAENKOM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIBBGAENKOM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBGAENKOM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIBBGAENKOM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
