#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define ACAKLNGHJBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x134A2AC0)
#define ACAKLNGHJBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x134A29F0)
#define ACAKLNGHJBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x134A2880)
#define ACAKLNGHJBD__CTOR_OFFSET UNITYSDK_OFFSET(0x134A2AB0)

inline static constexpr unsigned int ACAKLNGHJBD_TypeDefinitionIndex = 64738;

class ACAKLNGHJBD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x18
	::UnityEngine::GameObject* LNBIEGJBAKA; // 0x20
	::UnityEngine::UI::Text* NAEHMGJNJHJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKLNGHJBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACAKLNGHJBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKLNGHJBD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACAKLNGHJBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
