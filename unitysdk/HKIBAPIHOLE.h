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
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define HKIBAPIHOLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14953D90)
#define HKIBAPIHOLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14953CA0)
#define HKIBAPIHOLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14953AB0)
#define HKIBAPIHOLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14953D80)

inline static constexpr unsigned int HKIBAPIHOLE_TypeDefinitionIndex = 51853;

class HKIBAPIHOLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OCJOCLEDABL; // 0x18
	::UnityEngine::Transform* HEALDGLBIFK; // 0x20
	::LGINJIKKBJA* KOMIELKMHIC; // 0x28
	::UnityEngine::GameObject* GPMLKIDMKFP; // 0x30
	::LGINJIKKBJA* KDLNMKIAGAJ; // 0x38
	::UnityEngine::UI::VerticalLayoutGroup* ODALDIOFMPH; // 0x40
	::UnityEngine::UI::Text* DJILAODCBCI; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIBAPIHOLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKIBAPIHOLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKIBAPIHOLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIBAPIHOLE_KGEBDLGBGNM_OFFSET))(this);
	}
};
