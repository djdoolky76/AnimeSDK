#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define FPPNCJNAFAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CC8C30)
#define FPPNCJNAFAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CC8B20)
#define FPPNCJNAFAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CC88E0)
#define FPPNCJNAFAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC8C20)

inline static constexpr unsigned int FPPNCJNAFAA_TypeDefinitionIndex = 70385;

class FPPNCJNAFAA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HDDJKKCHIBA; // 0x18
	::UnityEngine::GameObject* MHFANMLEMII; // 0x20
	::UnityEngine::UI::Extension::UITabButton* MLCAMAJEHJK; // 0x28
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x30
	::UnityEngine::UI::Extension::UITabButton* JDMMGAMPIKL; // 0x38
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x40
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x48
	::LGINJIKKBJA* BKDDKDMILCA; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x58
	::UnityEngine::UI::Extension::UITabButton* OPEFONFBDAK; // 0x60
	::UnityEngine::CanvasGroup* OFHEGGLFIJF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNCJNAFAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPPNCJNAFAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPPNCJNAFAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPNCJNAFAA_KGEBDLGBGNM_OFFSET))(this);
	}
};
