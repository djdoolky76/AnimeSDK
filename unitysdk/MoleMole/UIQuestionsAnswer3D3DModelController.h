#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class DIOMKDGBINH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerScreenWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CHANGETOGAMEPREFAB_OFFSET UNITYSDK_OFFSET(0x19073950)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x190738A0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x19073890)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SCREENWIDGET_OFFSET UNITYSDK_OFFSET(0x19073870)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x19073880)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19073860)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19074C60)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19074CF0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19074360)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19074AE0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_REVERTSCENEPREFAB_OFFSET UNITYSDK_OFFSET(0x190740E0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_SETCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x19074E80)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19074B30)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19075000)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19074F00)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19075020)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190750B0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190750C0)
#define MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190750D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex = 51959;

	class UIQuestionsAnswer3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet_RTWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x12440);
		}
		static ::System::Int32* StaticGet_RTHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswer3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x12444);
		}
		// static const ::System::Int32 MONABFHPCNB = 0x8; // 0x0
		// static const ::System::Int32 CJKKCBMOPFK = 0x5; // 0x0
		::DIOMKDGBINH* _view; // 0x368
		::MoleMole::UIQuestionsAnswerScreenWidgetController* IPCFEPICGDE; // 0x370
		::UnityEngine::NAPRenderPipeline0::RTHandle* KMOCNMKJNKH; // 0x378
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NJJHCCEDMOI; // 0x380
		::UnityEngine::GameObject* AJGABLHCGPF; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* get_ScreenWidget()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SCREENWIDGET_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* CreateUIQuestionsAnswerScreenWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET))(this);
		}

		::System::Void ChangeToGamePrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_CHANGETOGAMEPREFAB_OFFSET))(this);
		}

		::System::Void RevertScenePrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_REVERTSCENEPREFAB_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetCameraActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER_SETCAMERAACTIVE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWER3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
