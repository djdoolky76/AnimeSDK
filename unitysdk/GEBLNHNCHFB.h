#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUILoopText;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define GEBLNHNCHFB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x189F74F0)
#define GEBLNHNCHFB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x189F7420)
#define GEBLNHNCHFB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x189F7270)
#define GEBLNHNCHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x189F74E0)

inline static constexpr unsigned int GEBLNHNCHFB_TypeDefinitionIndex = 66383;

class GEBLNHNCHFB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DFLNOPNDOOH; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x28
	::UnityEngine::GameObject* OCPFFNKLFKP; // 0x30
	::MonoUILoopText* HKEECNODOBP; // 0x38
	::UnityEngine::UI::Text* DGDENJKAJDB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBLNHNCHFB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEBLNHNCHFB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBLNHNCHFB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEBLNHNCHFB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
