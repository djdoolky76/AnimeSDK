#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AJJKJNPEHCH;
class BCFFCKPJKON;
class FGCOIBFFCHB;
class IOOIHHOJOPI;
class KIAEEMJLCJA;
class LGINJIKKBJA;
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JBBLAEPLHMB_AIGNEOMBOKG_OFFSET UNITYSDK_OFFSET(0x160D0B30)
#define JBBLAEPLHMB_ANDGIKOAICJ_OFFSET UNITYSDK_OFFSET(0x160D0B90)
#define JBBLAEPLHMB_DLEFGOFFBCJ_OFFSET UNITYSDK_OFFSET(0x160D13C0)
#define JBBLAEPLHMB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x160D0130)
#define JBBLAEPLHMB_OAMFCMHLDGC_OFFSET UNITYSDK_OFFSET(0x160D12B0)
#define JBBLAEPLHMB_ONCLICK_OFFSET UNITYSDK_OFFSET(0x160D0730)
#define JBBLAEPLHMB__CTOR_OFFSET UNITYSDK_OFFSET(0x160D0AE0)

inline static constexpr unsigned int JBBLAEPLHMB_TypeDefinitionIndex = 39250;

class JBBLAEPLHMB : public ::PBJOCICFNGK
{
public:
	::UnityEngine::RectTransform* MKELOKAMFCM; // 0x50
	::AJJKJNPEHCH* NJEDKFHNLIH; // 0x58
	::FGCOIBFFCHB* DJCMNPJBKIH; // 0x60
	::LGINJIKKBJA* PHDLHCELKKC; // 0x68
	::UnityEngine::RectTransform* EIFDAACJGDL; // 0x70
	::BCFFCKPJKON* EFFAONJBCOG; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* IIKEAFEMKAI; // 0x80
	::UnityEngine::RectTransform* LJLAMLMLOOJ; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* EHLPFJKBGIB; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* PFMMOJKOGCM; // 0x98
	::FGCOIBFFCHB* PBHLKBIJPED; // 0xA0
	::FGCOIBFFCHB* EOPKPDEFHPC; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBLAEPLHMB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JBBLAEPLHMB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBLAEPLHMB_ONCLICK_OFFSET))(this);
	}

	::System::Void AIGNEOMBOKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBLAEPLHMB_AIGNEOMBOKG_OFFSET))(this);
	}

	::System::Void ANDGIKOAICJ(::KIAEEMJLCJA* JFGMHJOCHGB, ::System::Int32 JAEANKPKEEI)
	{
		return ((::System::Void(*)(::PVOID, ::KIAEEMJLCJA*, ::System::Int32))((::PBYTE)hIl2Cpp + JBBLAEPLHMB_ANDGIKOAICJ_OFFSET))(this, JFGMHJOCHGB, JAEANKPKEEI);
	}

	::System::Void OAMFCMHLDGC(::System::Int32 ABHBKFJKINO, ::System::Object* LJBPECKCCEA, ::System::Boolean JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBBLAEPLHMB_OAMFCMHLDGC_OFFSET))(this, ABHBKFJKINO, LJBPECKCCEA, JBJFINAFFKO);
	}

	::System::Void DLEFGOFFBCJ(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBBLAEPLHMB_DLEFGOFFBCJ_OFFSET))(this, LIEJIGMGGOL);
	}
};
