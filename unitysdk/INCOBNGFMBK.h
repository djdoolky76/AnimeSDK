#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkClickInfo.h"
#include "unitysdk/System/ValueTuple_2.h"

class FPDNIBIHLLC;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define INCOBNGFMBK_BIJDHIOAOLI_OFFSET UNITYSDK_OFFSET(0x1658A850)
#define INCOBNGFMBK_DABBPFMECBF_OFFSET UNITYSDK_OFFSET(0x1658B340)
#define INCOBNGFMBK_DFBBPNENHBJ_OFFSET UNITYSDK_OFFSET(0x1658AB60)
#define INCOBNGFMBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1658A280)
#define INCOBNGFMBK_GEHEFPCNCNE_OFFSET UNITYSDK_OFFSET(0x1658A8D0)
#define INCOBNGFMBK_GNILOIINDNB_OFFSET UNITYSDK_OFFSET(0x1658AF20)
#define INCOBNGFMBK_JENOBNHCAAN_OFFSET UNITYSDK_OFFSET(0x1658A800)
#define INCOBNGFMBK_NIFBAAJEHKE_OFFSET UNITYSDK_OFFSET(0x1658A350)
#define INCOBNGFMBK_ODBJDGBDCID_OFFSET UNITYSDK_OFFSET(0x1658AAE0)
#define INCOBNGFMBK_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1658A1D0)
#define INCOBNGFMBK_PBJJNFNMADM_OFFSET UNITYSDK_OFFSET(0x1658B3A0)
#define INCOBNGFMBK_PLCFMLFFGBB_OFFSET UNITYSDK_OFFSET(0x1658B130)
#define INCOBNGFMBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1658A340)
#define INCOBNGFMBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1658A100)

inline static constexpr unsigned int INCOBNGFMBK_TypeDefinitionIndex = 55020;

class INCOBNGFMBK
{
public:
	static ::System::Boolean* StaticGet_AIBELIGHBIK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(INCOBNGFMBK_TypeDefinitionIndex)->GetStaticField(0x13470);
	}
	::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* IEACOOHMIFC; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* IJKGCHCFDML; // 0x18
	::FPDNIBIHLLC* HBAGDCICHIA; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* FKIDLICNPLO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCOBNGFMBK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCOBNGFMBK__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCOBNGFMBK_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCOBNGFMBK_DISPOSE_OFFSET))(this);
	}

	static ::UnityEngine::Transform* NIFBAAJEHKE(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_NIFBAAJEHKE_OFFSET))(FCCLIEJAKLI);
	}

	::System::Void JENOBNHCAAN(::FPDNIBIHLLC* PEHGJCDGKIF)
	{
		return ((::System::Void(*)(::PVOID, ::FPDNIBIHLLC*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_JENOBNHCAAN_OFFSET))(this, PEHGJCDGKIF);
	}

	::System::Void BIJDHIOAOLI(::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_BIJDHIOAOLI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* GEHEFPCNCNE(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_GEHEFPCNCNE_OFFSET))(this, FCCLIEJAKLI);
	}

	::System::Void ODBJDGBDCID(::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_ODBJDGBDCID_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DFBBPNENHBJ(::UnityEngine::UI::Extension::UILocalizationText* KEAAIMJEBNC)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_DFBBPNENHBJ_OFFSET))(this, KEAAIMJEBNC);
	}

	::System::Collections::Generic::List_1<::System::String*>* GNILOIINDNB(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_GNILOIINDNB_OFFSET))(this, FCCLIEJAKLI);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* PLCFMLFFGBB(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_PLCFMLFFGBB_OFFSET))(this, FCCLIEJAKLI);
	}

	::System::Void DABBPFMECBF(::FPDNIBIHLLC* PEHGJCDGKIF)
	{
		return ((::System::Void(*)(::PVOID, ::FPDNIBIHLLC*))((::PBYTE)hIl2Cpp + INCOBNGFMBK_DABBPFMECBF_OFFSET))(this, PEHGJCDGKIF);
	}

	::System::Void PBJJNFNMADM(::UnityEngine::UI::Extension::LinkClickInfo LKGOLAAECJB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::LinkClickInfo))((::PBYTE)hIl2Cpp + INCOBNGFMBK_PBJJNFNMADM_OFFSET))(this, LKGOLAAECJB);
	}
};
