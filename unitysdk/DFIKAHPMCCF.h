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

#define DFIKAHPMCCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x7F756E0)
#define DFIKAHPMCCF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x7F75610)
#define DFIKAHPMCCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x7F75430)
#define DFIKAHPMCCF__CTOR_OFFSET UNITYSDK_OFFSET(0x7F756D0)

inline static constexpr unsigned int DFIKAHPMCCF_TypeDefinitionIndex = 71306;

class DFIKAHPMCCF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x18
	::UnityEngine::GameObject* OCPFFNKLFKP; // 0x20
	::UnityEngine::UI::Text* DGDENJKAJDB; // 0x28
	::UnityEngine::GameObject* EHIBPJIMMMC; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::MonoUILoopText* HKEECNODOBP; // 0x40
	::UnityEngine::RectTransform* NLLAEKCKMNM; // 0x48
	::UnityEngine::RectTransform* DFLNOPNDOOH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIKAHPMCCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFIKAHPMCCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIKAHPMCCF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFIKAHPMCCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
