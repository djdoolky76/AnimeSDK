#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIAddFriendWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendInfoWidgetController; }
namespace MoleMole { class UIPersonalInfoWidgetController; }
namespace MoleMole { class UIRecentPlayerWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define CNOLEKMIAPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x168828D0)
#define CNOLEKMIAPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16882700)
#define CNOLEKMIAPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x168823A0)
#define CNOLEKMIAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x168828C0)

inline static constexpr unsigned int CNOLEKMIAPH_TypeDefinitionIndex = 60782;

class CNOLEKMIAPH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GAEBBHJDFLF; // 0x18
	::LGINJIKKBJA* GFPBENENGOA; // 0x20
	::LGINJIKKBJA* CABOPPNGIHD; // 0x28
	::ADEJAGFCBHK* NGJKCEAEJGF; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIFriendInfoWidgetController*>* LJLPKKFCENP; // 0x38
	::LGINJIKKBJA* BEGMKBODPPI; // 0x40
	::LGINJIKKBJA* AHPLEPENCOJ; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UIRecentPlayerWidgetController*>* MLGBNJFBNFP; // 0x50
	::LGINJIKKBJA* BAPGIBLMHPJ; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIPersonalInfoWidgetController*>* OMBNGNDMLON; // 0x60
	::MEKABAIJMNM_1<::MoleMole::UIAddFriendWidgetController*>* DJKLOMKOJFN; // 0x68
	::LGINJIKKBJA* BENGCMKCGNP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOLEKMIAPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNOLEKMIAPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNOLEKMIAPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOLEKMIAPH_KGEBDLGBGNM_OFFSET))(this);
	}
};
