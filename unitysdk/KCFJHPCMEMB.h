#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KCFJHPCMEMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14FCD5C0)
#define KCFJHPCMEMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14FCD440)
#define KCFJHPCMEMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14FCD160)
#define KCFJHPCMEMB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCD5B0)

inline static constexpr unsigned int KCFJHPCMEMB_TypeDefinitionIndex = 67079;

class KCFJHPCMEMB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EEFGHMBAGAK; // 0x18
	::GCIMMDDIFBJ* NDIOCEGELLJ; // 0x20
	::FGCOIBFFCHB* HCEDBIJOECH; // 0x28
	::FGCOIBFFCHB* ILOBEELCFOK; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38
	::UnityEngine::GameObject* MDIMNEDAOPF; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* IABEIIGNMLF; // 0x50
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ALIFFMJMAPI; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* OLNGIKMGAEB; // 0x68
	::FGCOIBFFCHB* APELMFMGHDK; // 0x70
	::UnityEngine::GameObject* OIIJOFKFAKO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFJHPCMEMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCFJHPCMEMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCFJHPCMEMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFJHPCMEMB_KGEBDLGBGNM_OFFSET))(this);
	}
};
