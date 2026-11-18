#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define KLHJBCAHEDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B9A2D0)
#define KLHJBCAHEDE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B9A200)
#define KLHJBCAHEDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B9A080)
#define KLHJBCAHEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9A2C0)

inline static constexpr unsigned int KLHJBCAHEDE_TypeDefinitionIndex = 80302;

class KLHJBCAHEDE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::MoleMole::MonoGamepadNavigatableList* GDFCFJPNEAB; // 0x28
	::UnityEngine::Transform* ODALDIOFMPH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHJBCAHEDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLHJBCAHEDE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHJBCAHEDE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KLHJBCAHEDE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
