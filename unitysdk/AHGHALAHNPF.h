#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AHGHALAHNPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143A4180)
#define AHGHALAHNPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143A4040)
#define AHGHALAHNPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143A3D80)
#define AHGHALAHNPF__CTOR_OFFSET UNITYSDK_OFFSET(0x143A4170)

inline static constexpr unsigned int AHGHALAHNPF_TypeDefinitionIndex = 71517;

class AHGHALAHNPF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x18
	::LGINJIKKBJA* KEMJHCLLAMH; // 0x20
	::FGCOIBFFCHB* LKABCAJPCHI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MLJMCJAOAJE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x38
	::UnityEngine::GameObject* LACBMFEJAFF; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ECJHBBIFIFK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GGMLMIGMHGP; // 0x50
	::UnityEngine::GameObject* LDIFOECAGEC; // 0x58
	::MoleMole::UIGeneralButtonController* DNGFGABBHEG; // 0x60
	::UnityEngine::Transform* PDACHPLBKIE; // 0x68
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x78
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGHALAHNPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHGHALAHNPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGHALAHNPF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHGHALAHNPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
