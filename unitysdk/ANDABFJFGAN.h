#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANDABFJFGAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x135F7050)
#define ANDABFJFGAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x135F6F30)
#define ANDABFJFGAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135F6BE0)
#define ANDABFJFGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x135F7040)

inline static constexpr unsigned int ANDABFJFGAN_TypeDefinitionIndex = 83524;

class ANDABFJFGAN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x20
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x28
	::UnityEngine::Animation* HLOCALEFHPB; // 0x30
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EBPGODBGOLI; // 0x40
	::UnityEngine::GameObject* HHCPHIBEEDD; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AAJEBMHFCCH; // 0x50
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* JBGCEDPPNGG; // 0x60
	::UnityEngine::GameObject* BMOPOIGPFHM; // 0x68
	::MoleMole::MonoGamepadNavigatableList* ACEKLJOHLAN; // 0x70
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x78
	::UnityEngine::GameObject* FOAKHBDPOMG; // 0x80
	::UnityEngine::GameObject* LFFMODGGEHM; // 0x88
	::UnityEngine::GameObject* EPIFILEEHFF; // 0x90
	::MoleMole::MonoGamepadSelectable* BCNAJFKNOFE; // 0x98
	::LGINJIKKBJA* IOIANILNPPI; // 0xA0
	::UnityEngine::GameObject* FLHFHGEHGFH; // 0xA8
	::UnityEngine::GameObject* EIHHINHABAJ; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDABFJFGAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANDABFJFGAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANDABFJFGAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDABFJFGAN_KGEBDLGBGNM_OFFSET))(this);
	}
};
