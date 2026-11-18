#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define MEEPPKEECDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177ACAA0)
#define MEEPPKEECDJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177AC9D0)
#define MEEPPKEECDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177AC820)
#define MEEPPKEECDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177ACA90)

inline static constexpr unsigned int MEEPPKEECDJ_TypeDefinitionIndex = 83779;

class MEEPPKEECDJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* DGDENJKAJDB; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::RectTransform* DFLNOPNDOOH; // 0x28
	::UnityEngine::RectTransform* NLLAEKCKMNM; // 0x30
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x38
	::UnityEngine::GameObject* OCPFFNKLFKP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPPKEECDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEEPPKEECDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPPKEECDJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEEPPKEECDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
