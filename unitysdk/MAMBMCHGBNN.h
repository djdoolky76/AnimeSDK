#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MAMBMCHGBNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151BA390)
#define MAMBMCHGBNN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151BA200)
#define MAMBMCHGBNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151B9E90)
#define MAMBMCHGBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x151BA380)

inline static constexpr unsigned int MAMBMCHGBNN_TypeDefinitionIndex = 80905;

class MAMBMCHGBNN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* EIDEBEAKDPJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GIHBDAGHJPJ; // 0x20
	::UnityEngine::Transform* AKKGHBIBJED; // 0x28
	::UnityEngine::Transform* LJJKEHPJGCG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BAHOHKKNNMJ; // 0x38
	::FGCOIBFFCHB* JFADEKINBNF; // 0x40
	::FGCOIBFFCHB* GFJKJADHKOI; // 0x48
	::FGCOIBFFCHB* NEIKCAOLNHE; // 0x50
	::FGCOIBFFCHB* LKPICEPBIKE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x60
	::FGCOIBFFCHB* ELCCMBMHFBI; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* KFFOGLKCCFL; // 0x70
	::UnityEngine::Transform* FILPGCNDNMC; // 0x78
	::UnityEngine::GameObject* KMFJKMCENGB; // 0x80
	::LGINJIKKBJA* ODGPNPPDILI; // 0x88
	::FGCOIBFFCHB* NOIOMPDGEEI; // 0x90
	::UnityEngine::RectTransform* HDIMKPLPCDJ; // 0x98
	::LGINJIKKBJA* HPFDFAKOAGN; // 0xA0
	::UnityEngine::Transform* HLNNLHBCAPM; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMBMCHGBNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAMBMCHGBNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMBMCHGBNN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAMBMCHGBNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
