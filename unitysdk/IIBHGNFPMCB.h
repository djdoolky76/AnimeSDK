#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define IIBHGNFPMCB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16578E00)
#define IIBHGNFPMCB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16578D10)
#define IIBHGNFPMCB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16578B10)
#define IIBHGNFPMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16578DF0)

inline static constexpr unsigned int IIBHGNFPMCB_TypeDefinitionIndex = 44055;

class IIBHGNFPMCB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GPMLKIDMKFP; // 0x18
	::UnityEngine::Transform* HEALDGLBIFK; // 0x20
	::UnityEngine::GameObject* OCJOCLEDABL; // 0x28
	::UnityEngine::UI::VerticalLayoutGroup* ODALDIOFMPH; // 0x30
	::MoleMole::MonoGamepadNestedListDelegate* GLIKKCNOGLH; // 0x38
	::LGINJIKKBJA* KOMIELKMHIC; // 0x40
	::UnityEngine::UI::Text* DJILAODCBCI; // 0x48
	::LGINJIKKBJA* KDLNMKIAGAJ; // 0x50
	::MonoUITableScrollV2* JLCDAMJANDF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBHGNFPMCB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IIBHGNFPMCB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBHGNFPMCB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IIBHGNFPMCB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
