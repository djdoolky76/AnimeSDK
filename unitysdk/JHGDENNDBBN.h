#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class OBLNJICBJCH;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JHGDENNDBBN_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x13842B10)
#define JHGDENNDBBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13842A70)
#define JHGDENNDBBN_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x13842990)
#define JHGDENNDBBN_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x138428A0)
#define JHGDENNDBBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x138427D0)
#define JHGDENNDBBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13842570)
#define JHGDENNDBBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13842890)

inline static constexpr unsigned int JHGDENNDBBN_TypeDefinitionIndex = 73544;

class JHGDENNDBBN : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::UI::Text* AJHAGPKPDGN; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Text* EIJIICLEGNI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* INOKEAFJFNF; // 0x30
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x38
	::UnityEngine::Transform* JHGGHHOJDPF; // 0x40
	::UnityEngine::GameObject* DAHBBHLPCDG; // 0x48
	::LGINJIKKBJA* FEHGBHMCHMB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* PDPEIOOJKNB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BDKBBOKFMOB; // 0x60
	::LGINJIKKBJA* CLPKGBMDHNM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGDENNDBBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHGDENNDBBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::JHGDENNDBBN* KDGMEFEJMGJ(::OBLNJICBJCH* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::JHGDENNDBBN*(*)(::OBLNJICBJCH*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHGDENNDBBN_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::OBLNJICBJCH* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::OBLNJICBJCH*))((::PBYTE)hIl2Cpp + JHGDENNDBBN_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHGDENNDBBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGDENNDBBN_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHGDENNDBBN_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
