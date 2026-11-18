#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HNMDJNJMPFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19E357F0)
#define HNMDJNJMPFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19E356B0)
#define HNMDJNJMPFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E35400)
#define HNMDJNJMPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E357E0)

inline static constexpr unsigned int HNMDJNJMPFP_TypeDefinitionIndex = 43816;

class HNMDJNJMPFP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HFOIKMDPJFA; // 0x18
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x20
	::FGCOIBFFCHB* KEGNNHIHKOJ; // 0x28
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x30
	::UnityEngine::RectTransform* NIJMIHAPEEI; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x48
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x50
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x58
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x68
	::FGCOIBFFCHB* AAICEELJIIB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMDJNJMPFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNMDJNJMPFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMDJNJMPFP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNMDJNJMPFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
