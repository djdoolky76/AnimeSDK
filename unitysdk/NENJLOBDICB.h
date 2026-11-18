#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define NENJLOBDICB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10D726B0)
#define NENJLOBDICB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10D725E0)
#define NENJLOBDICB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10D72410)
#define NENJLOBDICB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D726A0)

inline static constexpr unsigned int NENJLOBDICB_TypeDefinitionIndex = 75323;

class NENJLOBDICB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FIEAEGDAPJJ; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::LGINJIKKBJA* INBAMJIBJKL; // 0x28
	::UnityEngine::UI::Text* EIJIICLEGNI; // 0x30
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x38
	::UnityEngine::UI::Text* CHEOABHIINF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENJLOBDICB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NENJLOBDICB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NENJLOBDICB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENJLOBDICB_KGEBDLGBGNM_OFFSET))(this);
	}
};
