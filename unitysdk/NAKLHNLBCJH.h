#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NAKLHNLBCJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12C36780)
#define NAKLHNLBCJH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12C366B0)
#define NAKLHNLBCJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12C36500)
#define NAKLHNLBCJH__CTOR_OFFSET UNITYSDK_OFFSET(0x12C36770)

inline static constexpr unsigned int NAKLHNLBCJH_TypeDefinitionIndex = 70407;

class NAKLHNLBCJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::GameObject* ODALDIOFMPH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKLHNLBCJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAKLHNLBCJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKLHNLBCJH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAKLHNLBCJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
