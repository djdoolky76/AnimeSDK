#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Foundation/AssetPath.h"

class KFFNPHLIKAH;
class OKPICMMIMEC;
class PNHPELCKOHH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpTagBehaviour; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_BIHADHOGFJE_OFFSET UNITYSDK_OFFSET(0x1FA4C460)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_HIDETAGS_OFFSET UNITYSDK_OFFSET(0x1FA4BCB0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1FA4B740)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1FA4B7D0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1FA4B650)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1FA4B6C0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1FA4B890)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATETAGS_OFFSET UNITYSDK_OFFSET(0x1FA4BD20)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4C600)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1FA4C6B0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1FA4C740)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1FA4C7D0)
#define MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1FA4C860)

namespace MoleMole
{
	inline static constexpr unsigned int UICpCompanionEntityInfoWidgetController_TypeDefinitionIndex = 96471;

	class UICpCompanionEntityInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OKPICMMIMEC* _view; // 0x2C8
		::System::String* EEEGJJAAHLL; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* JMDOANHOEJG; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateData(::System::String* name, ::System::String* icon, ::System::String* goodTipsIcon, ::System::String* desc, ::System::String* num, ::Foundation::AssetPath frameOutLine, ::System::String* numTemplateStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Foundation::AssetPath, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATEDATA_OFFSET))(this, name, icon, goodTipsIcon, desc, num, frameOutLine, numTemplateStr);
		}

		::System::Void HideTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_HIDETAGS_OFFSET))(this);
		}

		::System::Void UpdateTags(::System::Collections::Generic::List_1<::System::Int32>* configTagss, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* tagNumDict, ::KFFNPHLIKAH* configMap, ::PNHPELCKOHH* world)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::KFFNPHLIKAH*, ::PNHPELCKOHH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_UPDATETAGS_OFFSET))(this, configTagss, tagNumDict, configMap, world);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BIHADHOGFJE(::System::String* FNJPKKAHJAJ, ::System::Int32 MJODFDBNJIP, ::System::Int32 DNFNKBNBJHM, ::MoleMole::UICpTagBehaviour* HIBLDNEBIMH)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::UICpTagBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPCOMPANIONENTITYINFOWIDGETCONTROLLER_BIHADHOGFJE_OFFSET))(this, FNJPKKAHJAJ, MJODFDBNJIP, DNFNKBNBJHM, HIBLDNEBIMH);
		}
	};
}
