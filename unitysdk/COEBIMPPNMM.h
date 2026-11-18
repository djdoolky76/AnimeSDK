#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define COEBIMPPNMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1971FBE0)
#define COEBIMPPNMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1971FB10)
#define COEBIMPPNMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1971F8E0)
#define COEBIMPPNMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1971FBD0)

inline static constexpr unsigned int COEBIMPPNMM_TypeDefinitionIndex = 49089;

class COEBIMPPNMM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ONOINJOLLPK; // 0x18
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x30
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x38
	::UnityEngine::GameObject* ILCHICALAHE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x48
	::LGINJIKKBJA* CGOBDCLIIDH; // 0x50
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x58
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COEBIMPPNMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COEBIMPPNMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COEBIMPPNMM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COEBIMPPNMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
