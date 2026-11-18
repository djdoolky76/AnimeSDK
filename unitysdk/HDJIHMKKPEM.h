#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HDJIHMKKPEM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15D9F620)
#define HDJIHMKKPEM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15D9F4E0)
#define HDJIHMKKPEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15D9F290)
#define HDJIHMKKPEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15D9F610)

inline static constexpr unsigned int HDJIHMKKPEM_TypeDefinitionIndex = 71377;

class HDJIHMKKPEM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NGOANNEEPAJ; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::MonoUITableScrollV2* EOMFDCFLCDK; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JHIGDEKCBND; // 0x38
	::LGINJIKKBJA* HGPPILAAIHD; // 0x40
	::MoleMole::MonoGamepadModule* DGMLHGEOPGK; // 0x48
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x50
	::FGCOIBFFCHB* KKIEAHAKFKM; // 0x58
	::MoleMole::MonoGamepadModule* NIBMNIDNNLE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIHMKKPEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDJIHMKKPEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDJIHMKKPEM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIHMKKPEM_KGEBDLGBGNM_OFFSET))(this);
	}
};
