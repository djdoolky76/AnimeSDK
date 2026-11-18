#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AIIAKKEONFC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15501EE0)
#define AIIAKKEONFC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15501DE0)
#define AIIAKKEONFC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15501B80)
#define AIIAKKEONFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15501ED0)

inline static constexpr unsigned int AIIAKKEONFC_TypeDefinitionIndex = 55207;

class AIIAKKEONFC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KGPFIMCBNGN; // 0x18
	::UnityEngine::RectTransform* JFCEJEKOAMA; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x30
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x38
	::UnityEngine::RectTransform* OMKKKALAKHL; // 0x40
	::MonoUITableScrollV2* JFGICCIFMOC; // 0x48
	::MonoUITableScrollV2* BJALGJCNJOH; // 0x50
	::UnityEngine::UI::Extension::UIImgText* BMLHGEJLNHK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x60
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x68
	::LGINJIKKBJA* ONOINJOLLPK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAKKEONFC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIIAKKEONFC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIIAKKEONFC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAKKEONFC_KGEBDLGBGNM_OFFSET))(this);
	}
};
