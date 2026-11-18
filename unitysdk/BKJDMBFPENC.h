#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BKJDMBFPENC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14257580)
#define BKJDMBFPENC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x142573C0)
#define BKJDMBFPENC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14257110)
#define BKJDMBFPENC__CTOR_OFFSET UNITYSDK_OFFSET(0x14257570)

inline static constexpr unsigned int BKJDMBFPENC_TypeDefinitionIndex = 82820;

class BKJDMBFPENC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ILOBEELCFOK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ALIFFMJMAPI; // 0x20
	::FGCOIBFFCHB* MDIMNEDAOPF; // 0x28
	::FGCOIBFFCHB* HCEDBIJOECH; // 0x30
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x38
	::FGCOIBFFCHB* APELMFMGHDK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* OLNGIKMGAEB; // 0x48
	::LGINJIKKBJA* EEFGHMBAGAK; // 0x50
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x58
	::FGCOIBFFCHB* IABEIIGNMLF; // 0x60
	::FGCOIBFFCHB* OIIJOFKFAKO; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJDMBFPENC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKJDMBFPENC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKJDMBFPENC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJDMBFPENC_KGEBDLGBGNM_OFFSET))(this);
	}
};
