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

#define ICODIDPLNOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F599E0)
#define ICODIDPLNOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F59910)
#define ICODIDPLNOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F59760)
#define ICODIDPLNOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F599D0)

inline static constexpr unsigned int ICODIDPLNOI_TypeDefinitionIndex = 39654;

class ICODIDPLNOI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OCPFFNKLFKP; // 0x18
	::UnityEngine::RectTransform* DFLNOPNDOOH; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Text* DGDENJKAJDB; // 0x30
	::MonoUILoopText* HKEECNODOBP; // 0x38
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICODIDPLNOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICODIDPLNOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICODIDPLNOI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICODIDPLNOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
