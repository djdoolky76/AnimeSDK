#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class OOGHGPHGCKI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NFCHBJPCJBC_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0xE191A50)
#define NFCHBJPCJBC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE191C70)
#define NFCHBJPCJBC_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0xE191B80)
#define NFCHBJPCJBC_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0xE1918F0)
#define NFCHBJPCJBC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE1917F0)
#define NFCHBJPCJBC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE1914A0)
#define NFCHBJPCJBC__CTOR_OFFSET UNITYSDK_OFFSET(0xE1918E0)

inline static constexpr unsigned int NFCHBJPCJBC_TypeDefinitionIndex = 58700;

class NFCHBJPCJBC : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::GameObject* NLKCOHFGOJN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KADCCCDGNGJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NNJMAFNLFOC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EBOCNPCDEKG; // 0x30
	::UnityEngine::RectTransform* INLLFDMMJIK; // 0x38
	::FGCOIBFFCHB* CECDFLCFMJE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KKEPGAIHJKE; // 0x48
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x50
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x58
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x60
	::FGCOIBFFCHB* DAGDBDLIBHB; // 0x68
	::UnityEngine::GameObject* HIKNPAOENBG; // 0x70
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x78
	::UnityEngine::Transform* NKDOJCFGJGF; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* LFEFMMIJKLJ; // 0x88
	::UnityEngine::Transform* PJCIKBOJKLG; // 0x90
	::FGCOIBFFCHB* BNJMHNKKACD; // 0x98
	::UnityEngine::UI::Text* JMCDKOKCOJN; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* MBNFAJHDGLA; // 0xB0
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCHBJPCJBC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFCHBJPCJBC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ(::OOGHGPHGCKI* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::OOGHGPHGCKI*))((::PBYTE)hIl2Cpp + NFCHBJPCJBC_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFCHBJPCJBC_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	static ::NFCHBJPCJBC* KDGMEFEJMGJ_1(::OOGHGPHGCKI* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::NFCHBJPCJBC*(*)(::OOGHGPHGCKI*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFCHBJPCJBC_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFCHBJPCJBC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCHBJPCJBC_KGEBDLGBGNM_OFFSET))(this);
	}
};
