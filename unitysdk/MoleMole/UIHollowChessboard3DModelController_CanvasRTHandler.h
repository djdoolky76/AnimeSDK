#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GMCPAFDJNLH;
class PNJDGHBEMLK;
namespace MoleMole { class NapCanvasScaler; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ALLOCATERT_OFFSET UNITYSDK_OFFSET(0x18F24D60)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ASSIGNUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x18F249F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_BINDPIECE_OFFSET UNITYSDK_OFFSET(0x18F242A0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x18F24810)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18F24330)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CREATEFULLRECTOFPARENT_OFFSET UNITYSDK_OFFSET(0x18F23C90)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DEALLOCATERT_OFFSET UNITYSDK_OFFSET(0x18F24680)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x18F243E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GETCANVASSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x18F25260)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x18F23070)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISASSIGNEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x18F230D0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x18F230F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x18F23050)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIROOTOBJ_OFFSET UNITYSDK_OFFSET(0x18F23090)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x18F230B0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_LAZYINIT_OFFSET UNITYSDK_OFFSET(0x18F23110)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_POSTOPENUI_OFFSET UNITYSDK_OFFSET(0x18F24AB0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_CANVAS_OFFSET UNITYSDK_OFFSET(0x18F23080)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISASSIGNEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x18F230E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x18F23100)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x18F23060)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIROOTOBJ_OFFSET UNITYSDK_OFFSET(0x18F230A0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x18F230C0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F253F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_CanvasRTHandler_TypeDefinitionIndex = 43496;

	class UIHollowChessboard3DModelController_CanvasRTHandler : public ::System::Object
	{
	public:
		::UnityEngine::Camera* _rtCamera; // 0x10
		::UnityEngine::GameObject* _uiRootObj_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::PNJDGHBEMLK*>* _pieceList; // 0x20
		::UnityEngine::GameObject* _rtCameraObj; // 0x28
		::MoleMole::UIWindowController* _uiWindowController_k__BackingField; // 0x30
		::UnityEngine::GameObject* _canvasObj; // 0x38
		::UnityEngine::Canvas* _canvas_k__BackingField; // 0x40
		::UnityEngine::NAPRenderPipeline0::RTHandle* _renderTexture_k__BackingField; // 0x48
		::MoleMole::NapCanvasScaler* _canvasScaler; // 0x50
		::UnityEngine::GameObject* _rootGo; // 0x58
		::System::Single _cameraHeight; // 0x60
		::System::Boolean _isAssignedController_k__BackingField; // 0x64
		::System::Boolean _IsDestroyed_k__BackingField; // 0x65
		::System::Byte _padding0[0x2];
		::System::Single _cameraWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* get_renderTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_RENDERTEXTURE_OFFSET))(this);
		}

		::System::Void set_renderTexture(::UnityEngine::NAPRenderPipeline0::RTHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_RENDERTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_CANVAS_OFFSET))(this);
		}

		::System::Void set_canvas(::UnityEngine::Canvas* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_CANVAS_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_uiRootObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIROOTOBJ_OFFSET))(this);
		}

		::System::Void set_uiRootObj(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIROOTOBJ_OFFSET))(this, value);
		}

		::MoleMole::UIWindowController* get_uiWindowController()
		{
			return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIWINDOWCONTROLLER_OFFSET))(this);
		}

		::System::Void set_uiWindowController(::MoleMole::UIWindowController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIWINDOWCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_isAssignedController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISASSIGNEDCONTROLLER_OFFSET))(this);
		}

		::System::Void set_isAssignedController(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISASSIGNEDCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISDESTROYED_OFFSET))(this, value);
		}

		::System::Void LazyInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_LAZYINIT_OFFSET))(this);
		}

		static ::UnityEngine::RectTransform* CreateFullRectOfParent(::UnityEngine::RectTransform* parent, ::System::String* name)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CREATEFULLRECTOFPARENT_OFFSET))(parent, name);
		}

		::System::Void BindPiece(::PNJDGHBEMLK* piece)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_BINDPIECE_OFFSET))(this, piece);
		}

		::System::Void Close(::PNJDGHBEMLK* piece)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSE_OFFSET))(this, piece);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DESTROY_OFFSET))(this);
		}

		::System::Void AssignUIController(::MoleMole::UIWindowController* controller, ::GMCPAFDJNLH* openParams, ::MoleMole::UIControllerContextBase* uiControllerContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::GMCPAFDJNLH*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ASSIGNUICONTROLLER_OFFSET))(this, controller, openParams, uiControllerContext);
		}

		::System::Void PostOpenUI(::MoleMole::UIWindowController* uiCtrl, ::GMCPAFDJNLH* openParams, ::MoleMole::UIControllerContextBase* uiControllerContext, ::System::Boolean isAssignedController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::GMCPAFDJNLH*, ::MoleMole::UIControllerContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_POSTOPENUI_OFFSET))(this, uiCtrl, openParams, uiControllerContext, isAssignedController);
		}

		::System::Void CloseUIController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSEUICONTROLLER_OFFSET))(this);
		}

		::System::Void AllocateRT(::System::Single rtwidth, ::System::Single rtheight, ::System::Boolean needPhysicPixel, ::System::String* uiName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ALLOCATERT_OFFSET))(this, rtwidth, rtheight, needPhysicPixel, uiName);
		}

		::System::Single GetCanvasScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GETCANVASSCALEFACTOR_OFFSET))(this);
		}

		::System::Boolean DeallocateRT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DEALLOCATERT_OFFSET))(this);
		}
	};
}
