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

#define DAJFFHOPBKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1CB500)
#define DAJFFHOPBKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1CB410)
#define DAJFFHOPBKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1CB1E0)
#define DAJFFHOPBKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CB4F0)

inline static constexpr unsigned int DAJFFHOPBKI_TypeDefinitionIndex = 91266;

class DAJFFHOPBKI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MCCNMLNMCJF; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::Animation* AOKJEGNBALI; // 0x28
	::MoleMole::MonoHollowGuideConfig* AHMFPFACACD; // 0x30
	::UnityEngine::RectTransform* EMDOIDLAFDB; // 0x38
	::UnityEngine::Animation* NJNAACMKEBD; // 0x40
	::UnityEngine::RectTransform* GKLEIMGLOGA; // 0x48
	::UnityEngine::CanvasGroup* OCKENNPJMHL; // 0x50
	::FGCOIBFFCHB* LOELDBNKAKF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJFFHOPBKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAJFFHOPBKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAJFFHOPBKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJFFHOPBKI_KGEBDLGBGNM_OFFSET))(this);
	}
};
