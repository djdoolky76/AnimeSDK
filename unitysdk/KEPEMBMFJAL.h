#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCJLMEJJOCB;
class CEHJMGDKAGM;
class FGCOIBFFCHB;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KEPEMBMFJAL_AFNNOPGEKCD_OFFSET UNITYSDK_OFFSET(0x18A66A20)
#define KEPEMBMFJAL_JGHLLMBPJNN_OFFSET UNITYSDK_OFFSET(0x167FA960)
#define KEPEMBMFJAL_MGBPMJCFELH_OFFSET UNITYSDK_OFFSET(0x167FA460)
#define KEPEMBMFJAL_NCOBIGNALIH_OFFSET UNITYSDK_OFFSET(0x167FABC0)
#define KEPEMBMFJAL_NJECMCHJJKA_OFFSET UNITYSDK_OFFSET(0x167FA9B0)
#define KEPEMBMFJAL_PNEOOBPBBMD_OFFSET UNITYSDK_OFFSET(0x167FA4D0)
#define KEPEMBMFJAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A66A10)

inline static constexpr unsigned int KEPEMBMFJAL_TypeDefinitionIndex = 57115;

class KEPEMBMFJAL : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x10
	::FGCOIBFFCHB* MNHOFEMCLNH; // 0x18
	::FGCOIBFFCHB* ANBLGKBBIKI; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::LGINJIKKBJA* PMBLECALCKB; // 0x30
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x38
	::UnityEngine::GameObject* DKMMLHHHHBK; // 0x40
	::FGCOIBFFCHB* IMDLHCPGEDN; // 0x48
	::LGINJIKKBJA* CAHPNFMBIDB; // 0x50
	::FGCOIBFFCHB* LMEGBBDFBMM; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* MBMLKIGNCED; // 0x60
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* KBGIAIHCEPL; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* CODBMJMMBKA; // 0x78
	::CEHJMGDKAGM* HJPIBDAABCJ; // 0x80
	::System::Int32 LGANCKONJKO; // 0x88
	::System::Boolean NCHODCGOJLP; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPEMBMFJAL__CTOR_OFFSET))(this);
	}

	::System::Void AFNNOPGEKCD(::BCJLMEJJOCB* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::BCJLMEJJOCB*))((::PBYTE)hIl2Cpp + KEPEMBMFJAL_AFNNOPGEKCD_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void MGBPMJCFELH(::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KEPEMBMFJAL_MGBPMJCFELH_OFFSET))(this, DEBGKPLOPCG);
	}

	::System::Void PNEOOBPBBMD(::CEHJMGDKAGM* HJPIBDAABCJ)
	{
		return ((::System::Void(*)(::PVOID, ::CEHJMGDKAGM*))((::PBYTE)hIl2Cpp + KEPEMBMFJAL_PNEOOBPBBMD_OFFSET))(this, HJPIBDAABCJ);
	}

	::System::Void NCOBIGNALIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPEMBMFJAL_NCOBIGNALIH_OFFSET))(this);
	}

	::System::Void NJECMCHJJKA(::System::Boolean FLGNHMKBNGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KEPEMBMFJAL_NJECMCHJJKA_OFFSET))(this, FLGNHMKBNGG);
	}

	::System::Void JGHLLMBPJNN(::System::Int32 LGANCKONJKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEPEMBMFJAL_JGHLLMBPJNN_OFFSET))(this, LGANCKONJKO);
	}
};
