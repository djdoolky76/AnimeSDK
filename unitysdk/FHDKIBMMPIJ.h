#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define FHDKIBMMPIJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x191C2D10)
#define FHDKIBMMPIJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x191C2BD0)
#define FHDKIBMMPIJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x191C2980)
#define FHDKIBMMPIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x191C2D00)

inline static constexpr unsigned int FHDKIBMMPIJ_TypeDefinitionIndex = 91312;

class FHDKIBMMPIJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* LONDMNEMFKN; // 0x18
	::UnityEngine::GameObject* GIEOJNEICLE; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x30
	::FGCOIBFFCHB* PPMNFDNPLJB; // 0x38
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x40
	::UnityEngine::RectTransform* FCOCNDLFIKE; // 0x48
	::FGCOIBFFCHB* HDBHEIFHADD; // 0x50
	::LGINJIKKBJA* NIFLFFKNONL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKIBMMPIJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHDKIBMMPIJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHDKIBMMPIJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDKIBMMPIJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
