#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define DHFLEBCDKBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1E0F70)
#define DHFLEBCDKBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1E0E60)
#define DHFLEBCDKBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1E0C30)
#define DHFLEBCDKBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E0F60)

inline static constexpr unsigned int DHFLEBCDKBK_TypeDefinitionIndex = 56215;

class DHFLEBCDKBK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* FJPIIIDJHML; // 0x18
	::UnityEngine::UI::Text* OEKCPFCAPMH; // 0x20
	::UnityEngine::GameObject* JHIGDEKCBND; // 0x28
	::FGCOIBFFCHB* FLGPMBHBEEE; // 0x30
	::FGCOIBFFCHB* AGANJCOADGM; // 0x38
	::UnityEngine::GameObject* IPNCFKKJLLL; // 0x40
	::UnityEngine::UI::Text* NHDNHHDGFGN; // 0x48
	::UnityEngine::GameObject* IJFCBFNOPBI; // 0x50
	::LGINJIKKBJA* PDDMIPIGOFH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEBCDKBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHFLEBCDKBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLEBCDKBK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHFLEBCDKBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
