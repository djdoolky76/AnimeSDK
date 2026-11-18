#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralEquipDetailV2WidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define IKLNHHKEEEC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1987FD30)
#define IKLNHHKEEEC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1987FC10)
#define IKLNHHKEEEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1987F870)
#define IKLNHHKEEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1987FD20)

inline static constexpr unsigned int IKLNHHKEEEC_TypeDefinitionIndex = 88919;

class IKLNHHKEEEC : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HLOELDBHFPG; // 0x18
	::UnityEngine::GameObject* GCLINGJKOKF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IBFLKLMNBGJ; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::MonoUITableScrollV2* GBDMPAFLBEB; // 0x38
	::UnityEngine::GameObject* GMDHEJIAEHB; // 0x40
	::LGINJIKKBJA* DFMEBNOEHLB; // 0x48
	::MoleMole::UIGeneralButtonController* GHCOFLDPCPE; // 0x50
	::MoleMole::UIGeneralButtonController* DLDMJBEMACN; // 0x58
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x60
	::MoleMole::MonoGamepadModule* KNMMNIIFAIL; // 0x68
	::UnityEngine::GameObject* JOLLMIPBEKN; // 0x70
	::MEKABAIJMNM_1<::MoleMole::UIGeneralEquipDetailV2WidgetController*>* KNFEFHFGKOP; // 0x78
	::UnityEngine::Transform* FBKLLAOBENI; // 0x80
	::UnityEngine::RectTransform* FKMKLMFNHPB; // 0x88
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x90
	::MoleMole::MonoGamepadModule* LLILCOICNBM; // 0x98
	::UnityEngine::GameObject* COPKFNAFGME; // 0xA0
	::UnityEngine::GameObject* BPLJIMLKLPK; // 0xA8
	::UnityEngine::GameObject* CNMMMKBFOOA; // 0xB0
	::UnityEngine::GameObject* JHJCGLJGOEN; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLNHHKEEEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKLNHHKEEEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKLNHHKEEEC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLNHHKEEEC_KGEBDLGBGNM_OFFSET))(this);
	}
};
