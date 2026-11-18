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

#define POLGLGJMAMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x119A5E20)
#define POLGLGJMAMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x119A5D10)
#define POLGLGJMAMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x119A5AC0)
#define POLGLGJMAMM__CTOR_OFFSET UNITYSDK_OFFSET(0x119A5E10)

inline static constexpr unsigned int POLGLGJMAMM_TypeDefinitionIndex = 45394;

class POLGLGJMAMM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KDADINNPFAK; // 0x18
	::UnityEngine::GameObject* BKDGGCFMIPD; // 0x20
	::LGINJIKKBJA* PPKEPOEPEEH; // 0x28
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x30
	::UnityEngine::Transform* HBHNPKPPKFE; // 0x38
	::UnityEngine::GameObject* OBNHHHHIPOL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BEGCOICMFFI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x50
	::LGINJIKKBJA* NIENBJEFKAF; // 0x58
	::UnityEngine::GameObject* ODDCLCMOPJJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGLGJMAMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POLGLGJMAMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POLGLGJMAMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGLGJMAMM_KGEBDLGBGNM_OFFSET))(this);
	}
};
