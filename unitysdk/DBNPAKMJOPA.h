#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define DBNPAKMJOPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1CF2C0)
#define DBNPAKMJOPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1CF180)
#define DBNPAKMJOPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1CEF50)
#define DBNPAKMJOPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CF2B0)

inline static constexpr unsigned int DBNPAKMJOPA_TypeDefinitionIndex = 60287;

class DBNPAKMJOPA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* OFHEGGLFIJF; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x20
	::LGINJIKKBJA* DAEMMMBCODF; // 0x28
	::UnityEngine::UI::Extension::UITabButton* MLCAMAJEHJK; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::UnityEngine::GameObject* GKMDDOPPNJH; // 0x40
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x48
	::LGINJIKKBJA* IFIMBDGBGKG; // 0x50
	::UnityEngine::UI::Extension::UITabButton* OPEFONFBDAK; // 0x58
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNPAKMJOPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBNPAKMJOPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBNPAKMJOPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNPAKMJOPA_KGEBDLGBGNM_OFFSET))(this);
	}
};
