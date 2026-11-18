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

#define NKADKALPNOK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10D7D000)
#define NKADKALPNOK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10D7CE50)
#define NKADKALPNOK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10D7CAA0)
#define NKADKALPNOK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7CFF0)

inline static constexpr unsigned int NKADKALPNOK_TypeDefinitionIndex = 70528;

class NKADKALPNOK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KEGNNHIHKOJ; // 0x18
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0x20
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x28
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x30
	::UnityEngine::RectTransform* OCKENNPJMHL; // 0x38
	::UnityEngine::RectTransform* DJJPHLNDJDB; // 0x40
	::ShaderAniHelp* CENAJMCPANF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x50
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x58
	::GCIMMDDIFBJ* NIJMIHAPEEI; // 0x60
	::FGCOIBFFCHB* IAEPDCJHLAG; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x70
	::LGINJIKKBJA* HFOIKMDPJFA; // 0x78
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x80
	::UnityEngine::GameObject* EIPIMCNKNCO; // 0x88
	::FGCOIBFFCHB* AAICEELJIIB; // 0x90
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x98
	::FGCOIBFFCHB* PEDKBKNDGEI; // 0xA0
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0xA8
	::UnityEngine::RectTransform* NMBDIALHDKN; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKADKALPNOK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKADKALPNOK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKADKALPNOK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKADKALPNOK_KGEBDLGBGNM_OFFSET))(this);
	}
};
