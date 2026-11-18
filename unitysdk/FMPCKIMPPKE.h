#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define FMPCKIMPPKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB58470)
#define FMPCKIMPPKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB583A0)
#define FMPCKIMPPKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB581C0)
#define FMPCKIMPPKE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB58460)

inline static constexpr unsigned int FMPCKIMPPKE_TypeDefinitionIndex = 51008;

class FMPCKIMPPKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JLLJPNMPKJA; // 0x18
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::UnityEngine::RectTransform* CHCCPCCKJBG; // 0x30
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x38
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x40
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x48
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCKIMPPKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMPCKIMPPKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCKIMPPKE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMPCKIMPPKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
