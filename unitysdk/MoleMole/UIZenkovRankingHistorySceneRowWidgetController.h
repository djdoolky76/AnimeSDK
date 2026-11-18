#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class BPPDAHJOLME;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovRankingHistorySceneRowWidgetController_RowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_DKPPINBJCCA_OFFSET UNITYSDK_OFFSET(0x170D8470)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_DMDONDKFFJO_OFFSET UNITYSDK_OFFSET(0x170D82E0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_FHBGKNHLJFG_OFFSET UNITYSDK_OFFSET(0x170D8610)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_IANNFPMCOAM_OFFSET UNITYSDK_OFFSET(0x170D6AF0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_JLMMAIHHDPG_OFFSET UNITYSDK_OFFSET(0x170D8A30)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_OHCOBJOMJNL_OFFSET UNITYSDK_OFFSET(0x170D8E80)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_OHPBILJCAEB_OFFSET UNITYSDK_OFFSET(0x170D7820)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170D69D0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170D6A60)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170D6900)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170D6960)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x170D6DF0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETIMAGE_1_OFFSET UNITYSDK_OFFSET(0x170D7C50)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x170D7BA0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x170D7260)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETRANKTEXT_OFFSET UNITYSDK_OFFSET(0x170D7450)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x170D6EB0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x170D7090)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D7FA0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D7EC0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170D80A0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170D8130)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170D81C0)
#define MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170D8250)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex = 74445;

	class UIZenkovRankingHistorySceneRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::UnityEngine::Color* StaticGet_EKHJANMCMMD()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB490);
		}
		static ::UnityEngine::Color* StaticGet_DCLPHOCAAFN()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}
		static ::UnityEngine::Color* StaticGet_ACOHIFKBNJA()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4B0);
		}
		static ::UnityEngine::Color* StaticGet_APDAJKLHOJM()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4C0);
		}
		static ::UnityEngine::Color* StaticGet_ECGODDGOKJO()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4D0);
		}
		static ::UnityEngine::Color* StaticGet_JPJEBMEGGCA()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4E0);
		}
		static ::System::Int32* StaticGet_JDPPAHOIMPE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4F0);
		}
		static ::UnityEngine::Color* StaticGet_DCEAGCICCAO()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB4F4);
		}
		static ::UnityEngine::Color* StaticGet_KMNIDMPLGGP()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB504);
		}
		static ::System::Int32* StaticGet_EIEDEDEHBNK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB514);
		}
		static ::UnityEngine::Color* StaticGet_AENADNLBDIH()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB518);
		}
		static ::System::Int32* StaticGet_HKFFMPGPAGI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB528);
		}
		static ::UnityEngine::Color* StaticGet_NAEPCJHLAIJ()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB52C);
		}
		static ::System::Int32* StaticGet_CPCFMLNNIAA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovRankingHistorySceneRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xB53C);
		}
		// static const ::System::UInt32 HBCNHAHODDJ = 0x64; // 0x0
		// static const ::System::UInt32 IEAIFOMHPMJ = 0x64; // 0x0
		::BPPDAHJOLME* _view; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Material*>* LPOEBCPPKMF; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::MoleMole::UIZenkovRankingHistorySceneRowWidgetController_RowData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovRankingHistorySceneRowWidgetController_RowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void SetTitleKey(::System::String* titleKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETTITLEKEY_OFFSET))(this, titleKey);
		}

		::System::Void SetTitleText(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETTITLETEXT_OFFSET))(this, title);
		}

		::System::Void SetNum(::System::UInt32 score, ::System::Boolean hasScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETNUM_OFFSET))(this, score, hasScore);
		}

		::System::Void SetRankText(::System::UInt32 rank, ::System::Boolean isInRank, ::System::String* rankTextKey, ::System::UInt32 rankPercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETRANKTEXT_OFFSET))(this, rank, isInRank, rankTextKey, rankPercent);
		}

		::System::Void SetImage(::System::String* spritePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETIMAGE_OFFSET))(this, spritePath);
		}

		::System::Void SetImage_1(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_SETIMAGE_1_OFFSET))(this, sprite);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::UnityEngine::Color DMDONDKFFJO(::System::UInt32 HCKDKJHAOMF, ::System::UInt32 NEHFONNELPO, ::System::Boolean IIOPBPFHJBO)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_DMDONDKFFJO_OFFSET))(this, HCKDKJHAOMF, NEHFONNELPO, IIOPBPFHJBO);
		}

		::UnityEngine::Color DKPPINBJCCA(::System::UInt32 HCKDKJHAOMF, ::System::UInt32 NEHFONNELPO, ::System::Boolean IIOPBPFHJBO)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_DKPPINBJCCA_OFFSET))(this, HCKDKJHAOMF, NEHFONNELPO, IIOPBPFHJBO);
		}

		::System::Void IANNFPMCOAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_IANNFPMCOAM_OFFSET))(this);
		}

		static ::System::Void FHBGKNHLJFG(::UnityEngine::Material* AEIHFBNNLBP, ::UnityEngine::Color FOHBABNIOIA, ::UnityEngine::Color DEKHFFHLCGE)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_FHBGKNHLJFG_OFFSET))(AEIHFBNNLBP, FOHBABNIOIA, DEKHFFHLCGE);
		}

		::UnityEngine::Material* JLMMAIHHDPG(::System::String* ADGJFOJLING, ::UnityEngine::Color FOHBABNIOIA, ::UnityEngine::Color DEKHFFHLCGE)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_JLMMAIHHDPG_OFFSET))(this, ADGJFOJLING, FOHBABNIOIA, DEKHFFHLCGE);
		}

		::System::Void OHPBILJCAEB(::System::UInt32 HCKDKJHAOMF, ::System::UInt32 NEHFONNELPO, ::System::Boolean IIOPBPFHJBO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_OHPBILJCAEB_OFFSET))(this, HCKDKJHAOMF, NEHFONNELPO, IIOPBPFHJBO);
		}

		::System::String* OHCOBJOMJNL(::System::UInt32 HCKDKJHAOMF, ::System::UInt32 NEHFONNELPO, ::System::Boolean IIOPBPFHJBO)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANKINGHISTORYSCENEROWWIDGETCONTROLLER_OHCOBJOMJNL_OFFSET))(this, HCKDKJHAOMF, NEHFONNELPO, IIOPBPFHJBO);
		}
	};
}
