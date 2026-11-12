#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchManager_GizmoShowOption.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace InControl { class InputDevice; }
namespace InControl { class Touch; }
namespace InControl { class TouchControl; }
namespace InControl { class TouchManager; }
namespace InControl { class TouchPool; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class Camera; }

#define INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET UNITYSDK_OFFSET(0x1CC029E0)
#define INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x1CC06000)
#define INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET UNITYSDK_OFFSET(0x1CC05FF0)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x1CC06DE0)
#define INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1CC06CD0)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x1CC07E70)
#define INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1CC07400)
#define INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1CC06140)
#define INCONTROL_TOUCHMANAGER_CREATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1CC04DA0)
#define INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1CC052C0)
#define INCONTROL_TOUCHMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC04160)
#define INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1CC04A70)
#define INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET UNITYSDK_OFFSET(0x1CC06F70)
#define INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1CC01960)
#define INCONTROL_TOUCHMANAGER_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1CC07ED0)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1CC06EE0)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1CC080D0)
#define INCONTROL_TOUCHMANAGER_GET_CONTROLSSHOWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1CC03D40)
#define INCONTROL_TOUCHMANAGER_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1CC02F20)
#define INCONTROL_TOUCHMANAGER_GET_HALFPERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1CC07F50)
#define INCONTROL_TOUCHMANAGER_GET_HALFPIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x1CC07FD0)
#define INCONTROL_TOUCHMANAGER_GET_HALFSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1CC07DF0)
#define INCONTROL_TOUCHMANAGER_GET_PERCENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x1CC02C90)
#define INCONTROL_TOUCHMANAGER_GET_PIXELTOWORLD_OFFSET UNITYSDK_OFFSET(0x1CC02C10)
#define INCONTROL_TOUCHMANAGER_GET_SCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1CC08050)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC018D0)
#define INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x1CC06EF0)
#define INCONTROL_TOUCHMANAGER_GET_VIEWSIZE_OFFSET UNITYSDK_OFFSET(0x1CC02D10)
#define INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x1CC064E0)
#define INCONTROL_TOUCHMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC045C0)
#define INCONTROL_TOUCHMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC041D0)
#define INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CC08260)
#define INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1CC07520)
#define INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET UNITYSDK_OFFSET(0x1CC077E0)
#define INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET UNITYSDK_OFFSET(0x1CC040B0)
#define INCONTROL_TOUCHMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1CC04910)
#define INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET UNITYSDK_OFFSET(0x1CC07280)
#define INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1CC07100)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x1CC06780)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET UNITYSDK_OFFSET(0x1CC069E0)
#define INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x1CC068B0)
#define INCONTROL_TOUCHMANAGER_SETUP_OFFSET UNITYSDK_OFFSET(0x1CC049A0)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1CC06B10)
#define INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET UNITYSDK_OFFSET(0x1CC08150)
#define INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET UNITYSDK_OFFSET(0x1CC05EB0)
#define INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET UNITYSDK_OFFSET(0x1CC06B90)
#define INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1CC05750)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZEATENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1CC055A0)
#define INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1CC04AF0)
#define INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1CC05790)
#define INCONTROL_TOUCHMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC05600)
#define INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET UNITYSDK_OFFSET(0x1CC02DA0)

namespace InControl
{
	inline static constexpr unsigned int TouchManager_TypeDefinitionIndex = 41863;

	class TouchManager
	{
	public:
		::UnityEngine::Camera* touchCamera; // 0x18
		::InControl::TouchManager_GizmoShowOption controlsShowGizmos; // 0x20
		::System::Boolean enableControlsOnTouch; // 0x24
		::System::Boolean _controlsEnabled; // 0x25
		::System::Byte _padding0[0x2];
		::System::Int32 controlsLayer; // 0x28
		::System::Byte _padding1[0x4];
		::InControl::InputDevice* device; // 0x30
		::UnityEngine::Vector3 viewSize; // 0x38
		::UnityEngine::Vector2 screenSize; // 0x44
		::UnityEngine::Vector2 halfScreenSize; // 0x4C
		::System::Single percentToWorld; // 0x54
		::System::Single halfPercentToWorld; // 0x58
		::System::Single pixelToWorld; // 0x5C
		::System::Single halfPixelToWorld; // 0x60
		::System::Byte _padding2[0x4];
		::Il2CppArray<::InControl::TouchControl*>* touchControls; // 0x68
		::InControl::TouchPool* cachedTouches; // 0x70
		::System::Collections::Generic::List_1<::InControl::Touch*>* activeTouches; // 0x78
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>* readOnlyActiveTouches; // 0x80
		::System::Boolean isReady; // 0x88
		::System::Byte _padding3[0x7];
		::Il2CppArray<::InControl::Touch*>* mouseTouches; // 0x90
		static ::System::Action** StaticGet_OnSetup()
		{
			return (::System::Action**)UnitySDK::FromName("InControl", "TouchManager")->GetStaticField(0x6AB50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnSetup(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ADD_ONSETUP_OFFSET))(a1);
		}

		static ::System::Void remove_OnSetup(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_REMOVE_ONSETUP_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SETUP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_RESET_OFFSET))(this);
		}

		::System::Collections::IEnumerator* UpdateScreenSizeAtEndOfFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATESCREENSIZEATENDOFFRAME_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void CreateDevice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CREATEDEVICE_OFFSET))(this);
		}

		::System::Void UpdateDevice(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATEDEVICE_OFFSET))(this, a1, a2);
		}

		::System::Void CommitDevice(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_COMMITDEVICE_OFFSET))(this, a1, a2);
		}

		::System::Void SubmitControlStates(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SUBMITCONTROLSTATES_OFFSET))(this, a1, a2);
		}

		::System::Void CommitControlStates(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_COMMITCONTROLSTATES_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateScreenSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATESCREENSIZE_OFFSET))(this, a1);
		}

		::System::Void CreateTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CREATETOUCHES_OFFSET))(this);
		}

		::System::Void UpdateTouches(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_UPDATETOUCHES_OFFSET))(this, a1, a2);
		}

		::System::Void SendTouchBegan(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHBEGAN_OFFSET))(this, a1);
		}

		::System::Void SendTouchMoved(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHMOVED_OFFSET))(this, a1);
		}

		::System::Void SendTouchEnded(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SENDTOUCHENDED_OFFSET))(this, a1);
		}

		::System::Void InvokeTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_INVOKETOUCHEVENTS_OFFSET))(this);
		}

		::System::Boolean TouchCameraIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_TOUCHCAMERAISVALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertScreenToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTSCREENTOWORLDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertViewToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTVIEWTOWORLDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ConvertScreenToViewPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTSCREENTOVIEWPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetCurrentScreenSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETCURRENTSCREENSIZE_OFFSET))(this);
		}

		::System::Boolean get_controlsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET))(this);
		}

		::System::Void set_controlsEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET))(this, a1);
		}

		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>* get_Touches()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_TOUCHES_OFFSET))();
		}

		static ::System::Int32 get_TouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::InControl::Touch* GetTouch(::System::Int32 a1)
		{
			return ((::InControl::Touch*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETTOUCH_OFFSET))(a1);
		}

		static ::InControl::Touch* GetTouchByFingerId(::System::Int32 a1)
		{
			return ((::InControl::Touch*(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GETTOUCHBYFINGERID_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ScreenToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SCREENTOWORLDPOINT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ViewToWorldPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_VIEWTOWORLDPOINT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ScreenToViewPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SCREENTOVIEWPOINT_OFFSET))(a1);
		}

		static ::System::Single ConvertToWorld(::System::Single a1, ::InControl::TouchUnitType a2)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect PercentToWorldRect(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_PERCENTTOWORLDRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Rect PixelToWorldRect(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_PIXELTOWORLDRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Rect ConvertToWorld_1(::UnityEngine::Rect a1, ::InControl::TouchUnitType a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_CONVERTTOWORLD_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CAMERA_OFFSET))();
		}

		static ::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_DEVICE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ViewSize()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_VIEWSIZE_OFFSET))();
		}

		static ::System::Single get_PercentToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_PERCENTTOWORLD_OFFSET))();
		}

		static ::System::Single get_HalfPercentToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_HALFPERCENTTOWORLD_OFFSET))();
		}

		static ::System::Single get_PixelToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_PIXELTOWORLD_OFFSET))();
		}

		static ::System::Single get_HalfPixelToWorld()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_HALFPIXELTOWORLD_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_ScreenSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_SCREENSIZE_OFFSET))();
		}

		static ::UnityEngine::Vector2 get_HalfScreenSize()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_HALFSCREENSIZE_OFFSET))();
		}

		static ::InControl::TouchManager_GizmoShowOption get_ControlsShowGizmos()
		{
			return ((::InControl::TouchManager_GizmoShowOption(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSSHOWGIZMOS_OFFSET))();
		}

		static ::System::Boolean get_ControlsEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_GET_CONTROLSENABLED_OFFSET))();
		}

		static ::System::Void set_ControlsEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_SET_CONTROLSENABLED_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit(::InControl::TouchManager* a1)
		{
			return ((::System::Boolean(*)(::InControl::TouchManager*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHMANAGER_OP_IMPLICIT_OFFSET))(a1);
		}

	};
}
