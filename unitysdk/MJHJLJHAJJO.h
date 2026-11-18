#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define MJHJLJHAJJO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17D37340)
#define MJHJLJHAJJO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17D37240)
#define MJHJLJHAJJO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17D36FD0)
#define MJHJLJHAJJO__CTOR_OFFSET UNITYSDK_OFFSET(0x17D37330)

inline static constexpr unsigned int MJHJLJHAJJO_TypeDefinitionIndex = 57678;

class MJHJLJHAJJO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x18
	::UnityEngine::CanvasGroup* FEHGBHMCHMB; // 0x20
	::UnityEngine::GameObject* EIHOCNOGPNK; // 0x28
	::FILNFMCNCFE* AGPPJINDJLA; // 0x30
	::FILNFMCNCFE* NGIABEIEFAI; // 0x38
	::UnityEngine::GameObject* HGEBIMKDLGB; // 0x40
	::FILNFMCNCFE* CKJJAJLHBAD; // 0x48
	::UnityEngine::GameObject* GKMHEIBOKPB; // 0x50
	::GCIMMDDIFBJ* JKFKHKHGNKG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHJLJHAJJO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJHJLJHAJJO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJHJLJHAJJO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHJLJHAJJO_KGEBDLGBGNM_OFFSET))(this);
	}
};
