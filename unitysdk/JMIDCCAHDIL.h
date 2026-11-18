#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define JMIDCCAHDIL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155A4890)
#define JMIDCCAHDIL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155A47C0)
#define JMIDCCAHDIL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155A45E0)
#define JMIDCCAHDIL__CTOR_OFFSET UNITYSDK_OFFSET(0x155A4880)

inline static constexpr unsigned int JMIDCCAHDIL_TypeDefinitionIndex = 48681;

class JMIDCCAHDIL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::Transform* ODALDIOFMPH; // 0x20
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* NPCIPCPJEMF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IAIPAIBAINK; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIDCCAHDIL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMIDCCAHDIL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMIDCCAHDIL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIDCCAHDIL_KGEBDLGBGNM_OFFSET))(this);
	}
};
