#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HNJOHGPFJBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E8FDF0)
#define HNJOHGPFJBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E8FC90)
#define HNJOHGPFJBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E8F9D0)
#define HNJOHGPFJBP__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8FDE0)

inline static constexpr unsigned int HNJOHGPFJBP_TypeDefinitionIndex = 69770;

class HNJOHGPFJBP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* NCABEKNFGFF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JEGALMHIEKK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NFLOEPMNIND; // 0x28
	::FGCOIBFFCHB* FOGPPDAFPCM; // 0x30
	::FGCOIBFFCHB* MCGLAADAMLP; // 0x38
	::FGCOIBFFCHB* ODFJPIMAJGK; // 0x40
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* MDLAFKJDHGL; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FNABDMOOHAO; // 0x50
	::FGCOIBFFCHB* ONNIKMMJEEG; // 0x58
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* JABPGBDDPIB; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IIFNHLJOIKM; // 0x68
	::UnityEngine::RectTransform* ONNACDHFNGA; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* GDAMNELKBAA; // 0x78
	::LGINJIKKBJA* LINJCKMHJNH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJOHGPFJBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNJOHGPFJBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNJOHGPFJBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJOHGPFJBP_KGEBDLGBGNM_OFFSET))(this);
	}
};
