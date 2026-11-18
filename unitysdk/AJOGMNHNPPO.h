#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AJOGMNHNPPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x135F1340)
#define AJOGMNHNPPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x135F11D0)
#define AJOGMNHNPPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135F0EF0)
#define AJOGMNHNPPO__CTOR_OFFSET UNITYSDK_OFFSET(0x135F1330)

inline static constexpr unsigned int AJOGMNHNPPO_TypeDefinitionIndex = 85588;

class AJOGMNHNPPO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KFFOGLKCCFL; // 0x18
	::UnityEngine::Transform* JMLCPKCMKJB; // 0x20
	::FGCOIBFFCHB* KBNCCFMHCDM; // 0x28
	::FGCOIBFFCHB* MHJPKECAIEL; // 0x30
	::LGINJIKKBJA* EOBFBDDPHHN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GIHBDAGHJPJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::UnityEngine::Transform* EIDEBEAKDPJ; // 0x50
	::LGINJIKKBJA* JNAFPACIHPG; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* KGJFPFJJKNP; // 0x60
	::FGCOIBFFCHB* LKPICEPBIKE; // 0x68
	::LGINJIKKBJA* HPFDFAKOAGN; // 0x70
	::FILNFMCNCFE* CALJMMPPAOE; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGMNHNPPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJOGMNHNPPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJOGMNHNPPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGMNHNPPO_KGEBDLGBGNM_OFFSET))(this);
	}
};
