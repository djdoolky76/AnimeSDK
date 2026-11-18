#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class ShaderAniHelp;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HLABFOOLCPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B66220)
#define HLABFOOLCPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B660C0)
#define HLABFOOLCPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B65D90)
#define HLABFOOLCPB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B66210)

inline static constexpr unsigned int HLABFOOLCPB_TypeDefinitionIndex = 82021;

class HLABFOOLCPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x18
	::LGINJIKKBJA* HFOIKMDPJFA; // 0x20
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x30
	::UnityEngine::RectTransform* OCKENNPJMHL; // 0x38
	::ShaderAniHelp* CENAJMCPANF; // 0x40
	::FGCOIBFFCHB* KEGNNHIHKOJ; // 0x48
	::FGCOIBFFCHB* AAICEELJIIB; // 0x50
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0x58
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x60
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x68
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x70
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x78
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x80
	::UnityEngine::GameObject* EIPIMCNKNCO; // 0x88
	::GCIMMDDIFBJ* NIJMIHAPEEI; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLABFOOLCPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLABFOOLCPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLABFOOLCPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLABFOOLCPB_KGEBDLGBGNM_OFFSET))(this);
	}
};
