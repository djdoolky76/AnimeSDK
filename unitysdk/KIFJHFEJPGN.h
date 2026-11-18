#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KIFJHFEJPGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B8EBF0)
#define KIFJHFEJPGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B8EAB0)
#define KIFJHFEJPGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B8E890)
#define KIFJHFEJPGN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8EBE0)

inline static constexpr unsigned int KIFJHFEJPGN_TypeDefinitionIndex = 65535;

class KIFJHFEJPGN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BKDGGCFMIPD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KDADINNPFAK; // 0x20
	::UnityEngine::Transform* HBHNPKPPKFE; // 0x28
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x30
	::FGCOIBFFCHB* ODKGAHDFMAP; // 0x38
	::UnityEngine::GameObject* OBNHHHHIPOL; // 0x40
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x48
	::LGINJIKKBJA* PPKEPOEPEEH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJHFEJPGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIFJHFEJPGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIFJHFEJPGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJHFEJPGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
