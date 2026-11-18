#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define PLPNEBFLKEJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D631410)
#define PLPNEBFLKEJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D631340)
#define PLPNEBFLKEJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D6311A0)
#define PLPNEBFLKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D631400)

inline static constexpr unsigned int PLPNEBFLKEJ_TypeDefinitionIndex = 39394;

class PLPNEBFLKEJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x20
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNEBFLKEJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLPNEBFLKEJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNEBFLKEJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLPNEBFLKEJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
