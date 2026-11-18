#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PIEHDHBJLGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D9CC5F0)
#define PIEHDHBJLGG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D9CC480)
#define PIEHDHBJLGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D9CC130)
#define PIEHDHBJLGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC5E0)

inline static constexpr unsigned int PIEHDHBJLGG_TypeDefinitionIndex = 53019;

class PIEHDHBJLGG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FNFDIHGPNFB; // 0x18
	::FILNFMCNCFE* CALJMMPPAOE; // 0x20
	::LGINJIKKBJA* OBDPBBEJCDL; // 0x28
	::UnityEngine::Transform* FILPGCNDNMC; // 0x30
	::UnityEngine::Transform* AAMKOLMDJIA; // 0x38
	::UnityEngine::Transform* EIDEBEAKDPJ; // 0x40
	::FGCOIBFFCHB* EIJMMDLEPOM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* KFFOGLKCCFL; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x58
	::FGCOIBFFCHB* KBNCCFMHCDM; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BPIGCJBJFHP; // 0x68
	::UnityEngine::GameObject* NDINKAJCDJO; // 0x70
	::FGCOIBFFCHB* POPGLGEDFFG; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x80
	::FGCOIBFFCHB* LKPICEPBIKE; // 0x88
	::LGINJIKKBJA* HPFDFAKOAGN; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* ICBDIAEODJN; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIEHDHBJLGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIEHDHBJLGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIEHDHBJLGG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIEHDHBJLGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
