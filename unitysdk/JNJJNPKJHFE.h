#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JNJJNPKJHFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x187504E0)
#define JNJJNPKJHFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x187503D0)
#define JNJJNPKJHFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18750150)
#define JNJJNPKJHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x187504D0)

inline static constexpr unsigned int JNJJNPKJHFE_TypeDefinitionIndex = 89022;

class JNJJNPKJHFE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadSelectable* BCNAJFKNOFE; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::GameObject* EPIFILEEHFF; // 0x28
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x30
	::UnityEngine::GameObject* BMOPOIGPFHM; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JBGCEDPPNGG; // 0x48
	::UnityEngine::GameObject* JFKNKJAMAGO; // 0x50
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x58
	::UnityEngine::GameObject* FOAKHBDPOMG; // 0x60
	::UnityEngine::Animation* HLOCALEFHPB; // 0x68
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJJNPKJHFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNJJNPKJHFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJJNPKJHFE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNJJNPKJHFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
