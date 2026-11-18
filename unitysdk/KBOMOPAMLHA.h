#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KBOMOPAMLHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A498640)
#define KBOMOPAMLHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A4984E0)
#define KBOMOPAMLHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A498220)
#define KBOMOPAMLHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A498630)

inline static constexpr unsigned int KBOMOPAMLHA_TypeDefinitionIndex = 56823;

class KBOMOPAMLHA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* GNHCADOMPKK; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::UnityEngine::UI::Text* MOOJOJMGJMJ; // 0x28
	::UnityEngine::UI::InputField* LJKDOEDMNLM; // 0x30
	::UnityEngine::UI::Text* CMMPOGIDOCP; // 0x38
	::LGINJIKKBJA* BKEMLIOJKPB; // 0x40
	::LGINJIKKBJA* JDCMOACDBED; // 0x48
	::UnityEngine::UI::InputField* EGIEIBDKMGK; // 0x50
	::LGINJIKKBJA* BKDDKDMILCA; // 0x58
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x60
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x68
	::UnityEngine::Transform* ODALDIOFMPH; // 0x70
	::MoleMole::MonoGamepadNavigatableList* GDFCFJPNEAB; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* JEGFAAIAFOP; // 0x80
	::UnityEngine::RectTransform* JFPNMILEOJM; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOMOPAMLHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBOMOPAMLHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBOMOPAMLHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOMOPAMLHA_KGEBDLGBGNM_OFFSET))(this);
	}
};
