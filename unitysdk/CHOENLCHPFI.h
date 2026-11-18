#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CHOENLCHPFI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1325F470)
#define CHOENLCHPFI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1325F3A0)
#define CHOENLCHPFI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1325F0F0)
#define CHOENLCHPFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1325F460)

inline static constexpr unsigned int CHOENLCHPFI_TypeDefinitionIndex = 40732;

class CHOENLCHPFI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FMODHHACKKO; // 0x18
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x20
	::UnityEngine::Transform* CHCKAKKNOGI; // 0x28
	::UnityEngine::RectTransform* FJGPOOLCOEP; // 0x30
	::FGCOIBFFCHB* DGCLIAOCIKL; // 0x38
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x40
	::UnityEngine::RectTransform* LBBHFJFEHFB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FGJDEHKHOAP; // 0x50
	::UnityEngine::RectTransform* MBKONFHOAEK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DPBKKOIOGJB; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BNENOPCDKCO; // 0x68
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* NKKGAKPNDGA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* BHFBBMOJCKK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOENLCHPFI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHOENLCHPFI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHOENLCHPFI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOENLCHPFI_KGEBDLGBGNM_OFFSET))(this);
	}
};
