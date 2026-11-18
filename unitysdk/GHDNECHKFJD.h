#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GHDNECHKFJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179EF720)
#define GHDNECHKFJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179EF690)
#define GHDNECHKFJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179EF490)
#define GHDNECHKFJD__CTOR_OFFSET UNITYSDK_OFFSET(0x179EF710)

inline static constexpr unsigned int GHDNECHKFJD_TypeDefinitionIndex = 80571;

class GHDNECHKFJD : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* DNNDLPCDAGO; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::RectTransform* JGJKEAPLBLF; // 0x28
	::ADEJAGFCBHK* FJFLHLKGOKL; // 0x30
	::MoleMole::MonoGamepadTabButtonGroup* HADHPNLMPEP; // 0x38
	::MoleMole::MonoGamepadCustomList* OBCELNJHBEC; // 0x40
	::UnityEngine::RectTransform* BGPNNKEHDEK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNECHKFJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHDNECHKFJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNECHKFJD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHDNECHKFJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
