#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_FramePressState.h"
#include "unitysdk/UnityEngine/EventSystems/PointerEventData_InputButton.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/CursorLockMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace Foundation { class MouseInputEnhancement_MouseInputEventRingBuffer; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class PointerInputModule_MouseButtonEventData; }
namespace UnityEngine::InputSystem { class InputControl; }

#define FOUNDATION_MOUSEINPUTENHANCEMENT_ADVANCE_OFFSET UNITYSDK_OFFSET(0x15E81C50)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_ALLOCATEANDFILLMOUSEBUTTONEVENTDATA_OFFSET UNITYSDK_OFFSET(0x15E818E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_BEFOREPROCESS_OFFSET UNITYSDK_OFFSET(0x15E832B0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_CLEARFRAMESTATE_OFFSET UNITYSDK_OFFSET(0x15E80700)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x15E7F850)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_CONVERTSCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x15E82240)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_DEALLOCATEMOUSEBUTTONEVENTDATA_OFFSET UNITYSDK_OFFSET(0x15E838D0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E80C20)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_DORAYCAST_OFFSET UNITYSDK_OFFSET(0x15E83960)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15E80CD0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0x15E823E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETALLMOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x15E825F0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETBUTTONEVENTCOUNTCURUPDATE_OFFSET UNITYSDK_OFFSET(0x15E80230)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETCACHEORDORAYCAST_OFFSET UNITYSDK_OFFSET(0x15E81B00)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETLASTPOSITION_OFFSET UNITYSDK_OFFSET(0x15E80480)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETLASTSENTPOINTERPRESSINGSTATE_OFFSET UNITYSDK_OFFSET(0x15E80040)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETMOUSEPOINTERID_OFFSET UNITYSDK_OFFSET(0x15E82390)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETMOUSEPOINTERINDEX_OFFSET UNITYSDK_OFFSET(0x15E7FE00)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETTRACKEDPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x15E7FD10)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GETTRACKEDPOINTERPRESSINGSTATE_OFFSET UNITYSDK_OFFSET(0x15E7FE50)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x15E80470)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_CURRENTSCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x15E806E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E81CB0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_ENABLEDONPLATFORM_OFFSET UNITYSDK_OFFSET(0x15E80EC0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15E80BC0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15E80D40)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_MAXCLICKEVENTPERUPDATE_OFFSET UNITYSDK_OFFSET(0x15E810E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_MOVESAMPLEMAXINSERTCOUNT_OFFSET UNITYSDK_OFFSET(0x15E81570)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_MOVESAMPLETHRESHOLDRATIO_OFFSET UNITYSDK_OFFSET(0x15E81320)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_SCROLLDELTASCALE_OFFSET UNITYSDK_OFFSET(0x15E811C0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_GET_SELFENABLED_OFFSET UNITYSDK_OFFSET(0x15E810C0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_HANDLEPOINTERTELEPORT_OFFSET UNITYSDK_OFFSET(0x15E820C0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_INCREASEBUTTONEVENTCOUNTCURUPDATE_OFFSET UNITYSDK_OFFSET(0x15E80320)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_INITALLSTATE_OFFSET UNITYSDK_OFFSET(0x15E7EE00)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x15E7E710)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_ISBUTTONEVENTCOUNTCURUPDATEREACHMAX_OFFSET UNITYSDK_OFFSET(0x15E80410)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_MARKNEXTMOVEASTELEPORT_OFFSET UNITYSDK_OFFSET(0x15E81650)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_ONAPPLICATIONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x15E821E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_ONMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x15E82670)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_REFRESHMOVESAMPLETHRESHOLDBYSCREEN_OFFSET UNITYSDK_OFFSET(0x15E7E630)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SETENABLEDINNER_OFFSET UNITYSDK_OFFSET(0x15E807D0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SETENABLED_OFFSET UNITYSDK_OFFSET(0x15E80E20)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SETLASTPOSITION_OFFSET UNITYSDK_OFFSET(0x15E805E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SETLASTSENDPOINTERPRESSINGSTATE_OFFSET UNITYSDK_OFFSET(0x15E80130)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SETTRACKEDPOINTERPRESSINGSTATE_OFFSET UNITYSDK_OFFSET(0x15E7FF40)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SET_MAXCLICKEVENTPERUPDATE_OFFSET UNITYSDK_OFFSET(0x15E81150)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SET_MOVESAMPLEMAXINSERTCOUNT_OFFSET UNITYSDK_OFFSET(0x15E815E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SET_MOVESAMPLETHRESHOLDRATIO_OFFSET UNITYSDK_OFFSET(0x15E81390)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SET_SCROLLDELTASCALE_OFFSET UNITYSDK_OFFSET(0x15E81230)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SET_SELFENABLED_OFFSET UNITYSDK_OFFSET(0x15E810D0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_SYNCALLLASTPOSITIONTOCURRENT_OFFSET UNITYSDK_OFFSET(0x15E82140)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x15E7ED20)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_TRYADDMOUSEMOVEMENTSAMPLE_OFFSET UNITYSDK_OFFSET(0x15E81CD0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_TRYGETCONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x15E822F0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT_WARPCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x15E816E0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E83DE0)
#define FOUNDATION_MOUSEINPUTENHANCEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7E340)

namespace Foundation
{
	inline static constexpr unsigned int MouseInputEnhancement_TypeDefinitionIndex = 69808;

	class MouseInputEnhancement : public ::System::Object
	{
	public:
		static ::Foundation::MouseInputEnhancement** StaticGet__instance()
		{
			return (::Foundation::MouseInputEnhancement**)Il2CppClass::FromTypeDefinitionIndex(MouseInputEnhancement_TypeDefinitionIndex)->GetStaticField(0x51E90);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet__allMouseButtons()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MouseInputEnhancement_TypeDefinitionIndex)->GetStaticField(0x51E98);
		}
		// static const ::System::Int32 _teleportSkipSampleCount = 0x3; // 0x0
		::Il2CppArray<::System::Boolean>* _lastSentPointerPressingState; // 0x10
		::Foundation::MouseInputEnhancement_MouseInputEventRingBuffer* _buffer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* _raycastResultCache; // 0x20
		::Il2CppArray<::System::Boolean>* _trackedPointerPressingState; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* _lastPosition; // 0x30
		::Il2CppArray<::UnityEngine::EventSystems::PointerEventData*>* _trackedPointerEventData; // 0x38
		::Il2CppArray<::System::Int32>* _buttonEventCountCurUpdate; // 0x40
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2, ::UnityEngine::EventSystems::RaycastResult>* _raycastCache; // 0x48
		::System::IDisposable* _mouseEventSubscription; // 0x50
		::System::Single _scrollDeltaY; // 0x58
		::System::Boolean _SelfEnabled_k__BackingField; // 0x5C
		::System::Boolean _disposed; // 0x5D
		::System::Boolean _wasAppFocused; // 0x5E
		::System::Byte _padding0[0x1];
		::System::Int32 _cachedScreenWidth; // 0x60
		::System::Single _scrollDeltaScale; // 0x64
		::System::Single _currentPositionY; // 0x68
		::System::Int32 _skipNextSamplingForTeleport; // 0x6C
		::System::Single _moveSampleThresholdRatio; // 0x70
		::UnityEngine::CursorLockMode _lastCursorLockMode; // 0x74
		::System::Int32 _moveSampleMaxInsertCount; // 0x78
		::System::Single _currentPositionX; // 0x7C
		::System::Int32 _maxClickEventPerUpdate; // 0x80
		::System::Int32 _cachedScreenHeight; // 0x84
		::System::Single _scrollDeltaX; // 0x88
		::System::Single _cachedMoveSampleThresholdByPixel; // 0x8C
		::System::Single _cachedSqrMoveSampleThresholdByPixel; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_CLEAR_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerEventData* GetTrackedPointerEventData(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::UnityEngine::EventSystems::PointerEventData*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETTRACKEDPOINTEREVENTDATA_OFFSET))(this, button);
		}

		::System::Boolean GetTrackedPointerPressingState(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETTRACKEDPOINTERPRESSINGSTATE_OFFSET))(this, button);
		}

		::System::Void SetTrackedPointerPressingState(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SETTRACKEDPOINTERPRESSINGSTATE_OFFSET))(this, button, state);
		}

		::System::Boolean GetLastSentPointerPressingState(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETLASTSENTPOINTERPRESSINGSTATE_OFFSET))(this, button);
		}

		::System::Void SetLastSendPointerPressingState(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SETLASTSENDPOINTERPRESSINGSTATE_OFFSET))(this, button, state);
		}

		::System::Int32 GetButtonEventCountCurUpdate(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETBUTTONEVENTCOUNTCURUPDATE_OFFSET))(this, button);
		}

		::System::Void IncreaseButtonEventCountCurUpdate(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_INCREASEBUTTONEVENTCOUNTCURUPDATE_OFFSET))(this, button);
		}

		::System::Boolean IsButtonEventCountCurUpdateReachMax(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_ISBUTTONEVENTCOUNTCURUPDATEREACHMAX_OFFSET))(this, button);
		}

		::UnityEngine::Vector2 get_CurrentPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetLastPosition(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETLASTPOSITION_OFFSET))(this, button);
		}

		::UnityEngine::Vector2 SetLastPosition(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SETLASTPOSITION_OFFSET))(this, button, pos);
		}

		::UnityEngine::Vector2 get_CurrentScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_CURRENTSCROLLDELTA_OFFSET))(this);
		}

		::System::Void ClearFrameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_CLEARFRAMESTATE_OFFSET))(this);
		}

		::System::Void InitAllState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_INITALLSTATE_OFFSET))(this);
		}

		::System::Void SetEnabledInner(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SETENABLEDINNER_OFFSET))(this, enable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_FINALIZE_OFFSET))(this);
		}

		::System::Void ThrowIfDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_THROWIFDISPOSED_OFFSET))(this);
		}

		static ::Foundation::MouseInputEnhancement* get_Instance()
		{
			return ((::Foundation::MouseInputEnhancement*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void SetEnabled(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SETENABLED_OFFSET))(enable);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_EnabledOnPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_ENABLEDONPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_SelfEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_SELFENABLED_OFFSET))(this);
		}

		::System::Void set_SelfEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SET_SELFENABLED_OFFSET))(this, value);
		}

		static ::System::Int32 get_MaxClickEventPerUpdate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_MAXCLICKEVENTPERUPDATE_OFFSET))();
		}

		static ::System::Void set_MaxClickEventPerUpdate(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SET_MAXCLICKEVENTPERUPDATE_OFFSET))(value);
		}

		static ::System::Single get_ScrollDeltaScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_SCROLLDELTASCALE_OFFSET))();
		}

		static ::System::Void set_ScrollDeltaScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SET_SCROLLDELTASCALE_OFFSET))(value);
		}

		static ::System::Single get_MoveSampleThresholdRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_MOVESAMPLETHRESHOLDRATIO_OFFSET))();
		}

		static ::System::Void set_MoveSampleThresholdRatio(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SET_MOVESAMPLETHRESHOLDRATIO_OFFSET))(value);
		}

		static ::System::Int32 get_MoveSampleMaxInsertCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_MOVESAMPLEMAXINSERTCOUNT_OFFSET))();
		}

		static ::System::Void set_MoveSampleMaxInsertCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SET_MOVESAMPLEMAXINSERTCOUNT_OFFSET))(value);
		}

		static ::System::Void MarkNextMoveAsTeleport()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_MARKNEXTMOVEASTELEPORT_OFFSET))();
		}

		static ::System::Void WarpCursorPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_WARPCURSORPOSITION_OFFSET))(position);
		}

		::System::Void Advance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_ADVANCE_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* get_Current()
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GET_CURRENT_OFFSET))(this);
		}

		::System::Void TryAddMouseMovementSample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_TRYADDMOUSEMOVEMENTSAMPLE_OFFSET))(this);
		}

		::System::Void RefreshMoveSampleThresholdByScreen(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_REFRESHMOVESAMPLETHRESHOLDBYSCREEN_OFFSET))(this, force);
		}

		::System::Void HandlePointerTeleport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_HANDLEPOINTERTELEPORT_OFFSET))(this);
		}

		::System::Void OnApplicationFocusChanged(::System::Boolean isFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_ONAPPLICATIONFOCUSCHANGED_OFFSET))(this, isFocused);
		}

		::System::Void SyncAllLastPositionToCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_SYNCALLLASTPOSITIONTOCURRENT_OFFSET))(this);
		}

		static ::System::Single ConvertScrollDelta(::System::Single raw)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_CONVERTSCROLLDELTA_OFFSET))(raw);
		}

		static ::System::Boolean TryGetControlButton(::UnityEngine::InputSystem::InputControl*& control, ::UnityEngine::EventSystems::PointerEventData_InputButton& button)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*&, ::UnityEngine::EventSystems::PointerEventData_InputButton&))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_TRYGETCONTROLBUTTON_OFFSET))(control, button);
		}

		static ::System::Int32 GetMousePointerId(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Int32(*)(::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETMOUSEPOINTERID_OFFSET))(button);
		}

		static ::System::Int32 GetMousePointerIndex(::UnityEngine::EventSystems::PointerEventData_InputButton button)
		{
			return ((::System::Int32(*)(::UnityEngine::EventSystems::PointerEventData_InputButton))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETMOUSEPOINTERINDEX_OFFSET))(button);
		}

		static ::UnityEngine::EventSystems::RaycastResult FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* candidates)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_FINDFIRSTRAYCAST_OFFSET))(candidates);
		}

		static ::Il2CppArray<::System::Object*>* GetAllMouseButtons()
		{
			return ((::Il2CppArray<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETALLMOUSEBUTTONS_OFFSET))();
		}

		::System::Void OnMouseEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_ONMOUSEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void BeforeProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_BEFOREPROCESS_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* AllocateAndFillMouseButtonEventData(::UnityEngine::EventSystems::PointerEventData_InputButton button, ::UnityEngine::EventSystems::PointerEventData_FramePressState pressState)
		{
			return ((::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::EventSystems::PointerEventData_FramePressState))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_ALLOCATEANDFILLMOUSEBUTTONEVENTDATA_OFFSET))(this, button, pressState);
		}

		static ::System::Void DeallocateMouseButtonEventData(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* data)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_DEALLOCATEMOUSEBUTTONEVENTDATA_OFFSET))(data);
		}

		::System::Void GetCacheOrDoRaycast(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_GETCACHEORDORAYCAST_OFFSET))(this, pointerEventData);
		}

		::System::Void DoRaycast(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FOUNDATION_MOUSEINPUTENHANCEMENT_DORAYCAST_OFFSET))(this, pointerEventData);
		}
	};
}
