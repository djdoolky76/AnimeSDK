#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoHollowGuideConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define DJIOENNHKKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19D6BF40)
#define DJIOENNHKKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19D6BE50)
#define DJIOENNHKKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19D6BC40)
#define DJIOENNHKKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6BF30)

inline static constexpr unsigned int DJIOENNHKKE_TypeDefinitionIndex = 92589;

class DJIOENNHKKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* OBNLBMABFPF; // 0x18
	::UnityEngine::RectTransform* GHKOLEIMBKE; // 0x20
	::MoleMole::MonoHollowGuideConfig* AHMFPFACACD; // 0x28
	::UnityEngine::RectTransform* JFHCMCCHFCK; // 0x30
	::UnityEngine::Animation* MGKENAOIENI; // 0x38
	::FGCOIBFFCHB* FONOOCHNPJM; // 0x40
	::UnityEngine::CanvasGroup* OCKENNPJMHL; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOENNHKKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJIOENNHKKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOENNHKKE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJIOENNHKKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
