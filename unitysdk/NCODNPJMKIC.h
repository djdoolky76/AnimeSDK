#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NCODNPJMKIC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13B596C0)
#define NCODNPJMKIC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13B595F0)
#define NCODNPJMKIC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13B593F0)
#define NCODNPJMKIC__CTOR_OFFSET UNITYSDK_OFFSET(0x13B596B0)

inline static constexpr unsigned int NCODNPJMKIC_TypeDefinitionIndex = 53565;

class NCODNPJMKIC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PJLIMJOGOKD; // 0x18
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x20
	::MoleMole::MonoInputKey* FKOBIFAFEGP; // 0x28
	::FGCOIBFFCHB* ADOMBENGNJF; // 0x30
	::UnityEngine::RectTransform* EMEHGOECJDG; // 0x38
	::MoleMole::MonoGamepadCustomList* MPOMJOGAJHJ; // 0x40
	::UnityEngine::UI::Extension::UITimeWidget* MMNNLOMMNGL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCODNPJMKIC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCODNPJMKIC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCODNPJMKIC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCODNPJMKIC_KGEBDLGBGNM_OFFSET))(this);
	}
};
