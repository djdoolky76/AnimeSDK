#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A651DEB7A137AF10.h"
#include "unitysdk/A769E3105BB55487/B1AC97B6BD57A3F7.h"
#include "unitysdk/A769E3105BB55487/E996557415E52D27.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_B3C38379648B57D5.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/A087362547CDC4E5_BE2D2B6086BE720C.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ACTIVECONTROLISVALID_OFFSET UNITYSDK_OFFSET(0x3FFD960)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_CANCELED_OFFSET UNITYSDK_OFFSET(0x3FFE930)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_PERFORMED_OFFSET UNITYSDK_OFFSET(0x3FFE980)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0x3FFE9D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONACTIONTOBINDINGINDEXONMAP_OFFSET UNITYSDK_OFFSET(0x3FFDA70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONMAPTOBINDINGINDEXONACTION_OFFSET UNITYSDK_OFFSET(0x3FFDC20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_CLONE_OFFSET UNITYSDK_OFFSET(0x3FFDCE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_CREATEINTERNALACTIONMAPFORSINGLETONACTION_OFFSET UNITYSDK_OFFSET(0x3FFDE20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x3FFDF20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3FFDFA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x3FFDFC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GENERATEID_OFFSET UNITYSDK_OFFSET(0x3FFE050)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETORCREATEACTIONMAP_OFFSET UNITYSDK_OFFSET(0x3FFE0A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIONMAP_OFFSET UNITYSDK_OFFSET(0x3FFEA20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIVECONTROL_OFFSET UNITYSDK_OFFSET(0x3FFEA40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x3FFEAC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x3FFEB10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x3FFEB80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3FFEC10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_IDDONTGENERATE_OFFSET UNITYSDK_OFFSET(0x3FFEC70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ID_OFFSET UNITYSDK_OFFSET(0x3FFECC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x165A410)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ISSINGLETONACTION_OFFSET UNITYSDK_OFFSET(0x3FFED40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x3FFED60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TRIGGERED_OFFSET UNITYSDK_OFFSET(0x3FFE520)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x3FFEDC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x3FFE1B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_MAKESUREIDISINPLACE_OFFSET UNITYSDK_OFFSET(0x3FFE200)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_CANCELED_OFFSET UNITYSDK_OFFSET(0x3FFEDE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_PERFORMED_OFFSET UNITYSDK_OFFSET(0x3FFEE30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0x3FFEE80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_WANTSINITIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x3FFEED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x3FFDCE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3FFE260)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPERFORMEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x3FFE520)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x3FFE5A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASRELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x3FFE620)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3FFE6A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3FFE700)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputAction_TypeDefinitionIndex = 14537;

	class InputAction : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::A769E3105BB55487::B1AC97B6BD57A3F7 m_Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* m_ExpectedControlType; // 0x20
		::System::String* m_Id; // 0x28
		::System::String* m_Processors; // 0x30
		::System::String* m_Interactions; // 0x38
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* m_SingletonActionBindings; // 0x40
		::UnityEngine::InputSystem::InputAction_B3C38379648B57D5 m_Flags; // 0x48
		::System::Byte _padding1[0x4];
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask; // 0x50
		::System::Byte _padding2[0x58];
		::System::Int32 m_BindingsStartIndex; // 0xB0
		::System::Int32 m_BindingsCount; // 0xB4
		::System::Int32 m_ControlStartIndex; // 0xB8
		::System::Int32 m_ControlCount; // 0xBC
		::System::Int32 m_ActionIndexInState; // 0xC0
		::System::Byte _padding3[0x4];
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0xC8
		::A651DEB7A137AF10<::System::Action_1<::System::Object*>*> m_OnStarted; // 0xD0
		::System::Byte _padding4[0x48];
		::A651DEB7A137AF10<::System::Action_1<::System::Object*>*> m_OnCanceled; // 0x120
		::System::Byte _padding5[0x48];
		::A651DEB7A137AF10<::System::Action_1<::System::Object*>*> m_OnPerformed; // 0x170

		::A769E3105BB55487::E996557415E52D27 get_phase()
		{
			return ((::A769E3105BB55487::E996557415E52D27(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PHASE_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ENABLED_OFFSET))(this);
		}

		::System::String* MakeSureIdIsInPlace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_MAKESUREIDISINPLACE_OFFSET))(this);
		}

		::System::Void remove_started(::System::Action_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_STARTED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Guid get_idDontGenerate()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_IDDONTGENERATE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISABLE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* GetOrCreateActionMap()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GETORCREATEACTIONMAP_OFFSET))(this);
		}

		::A769E3105BB55487::B1AC97B6BD57A3F7 get_type()
		{
			return ((::A769E3105BB55487::B1AC97B6BD57A3F7(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_wantsInitialStateCheck(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SET_WANTSINITIALSTATECHECK_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 BindingIndexOnActionToBindingIndexOnMap(::System::Int32 F35D210F809F12B8)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONACTIONTOBINDINGINDEXONMAP_OFFSET))(this, F35D210F809F12B8);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_DISPOSE_OFFSET))(this);
		}

		::System::Void remove_performed(::System::Action_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_PERFORMED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ENABLE_OFFSET))(this);
		}

		::System::Boolean get_triggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_TRIGGERED_OFFSET))(this);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding> get_bindings()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_BINDINGS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* Clone()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_CLONE_OFFSET))(this);
		}

		::System::String* get_processors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_PROCESSORS_OFFSET))(this);
		}

		::System::Void GenerateId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GENERATEID_OFFSET))(this);
		}

		::System::Boolean WasReleasedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASRELEASEDTHISFRAME_OFFSET))(this);
		}

		::A087362547CDC4E5_BE2D2B6086BE720C get_currentState()
		{
			return ((::A087362547CDC4E5_BE2D2B6086BE720C(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Boolean IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ISPRESSED_OFFSET))(this);
		}

		::System::Void add_canceled(::System::Action_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_CANCELED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor(::System::String* F79B4D487F303AB2, ::A769E3105BB55487::B1AC97B6BD57A3F7 A288CB28FC2A6DA3, ::System::String* F14B4FF9E6D09320, ::System::String* FEE63AF312DDEE93, ::System::String* EF090E03A240DD6B, ::System::String* AFEEE77F5D292B78)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::A769E3105BB55487::B1AC97B6BD57A3F7, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_OFFSET))(this, F79B4D487F303AB2, A288CB28FC2A6DA3, F14B4FF9E6D09320, FEE63AF312DDEE93, EF090E03A240DD6B, AFEEE77F5D292B78);
		}

		::System::Int32 BindingIndexOnMapToBindingIndexOnAction(::System::Int32 B8E17C14325BEAAF)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_BINDINGINDEXONMAPTOBINDINGINDEXONACTION_OFFSET))(this, B8E17C14325BEAAF);
		}

		::UnityEngine::InputSystem::InputControl* get_activeControl()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIVECONTROL_OFFSET))(this);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputControl*> get_controls()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_CONTROLS_OFFSET))(this);
		}

		::System::Void add_performed(::System::Action_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_PERFORMED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void CreateInternalActionMapForSingletonAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_CREATEINTERNALACTIONMAPFORSINGLETONACTION_OFFSET))(this);
		}

		::System::Boolean get_wantsInitialStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_WANTSINITIALSTATECHECK_OFFSET))(this);
		}

		::System::String* get_interactions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_INTERACTIONS_OFFSET))(this);
		}

		::System::Guid get_id()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ID_OFFSET))(this);
		}

		::System::Void remove_canceled(::System::Action_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_REMOVE_CANCELED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION__CTOR_1_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* get_actionMap()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ACTIONMAP_OFFSET))(this);
		}

		::System::Boolean WasPressedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPRESSEDTHISFRAME_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_NAME_OFFSET))(this);
		}

		::System::Boolean WasPerformedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_WASPERFORMEDTHISFRAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_TOSTRING_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean ActiveControlIsValid(::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ACTIVECONTROLISVALID_OFFSET))(this, B35325D9541AD934);
		}

		::System::Void add_started(::System::Action_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_ADD_STARTED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_isSingletonAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTION_GET_ISSINGLETONACTION_OFFSET))(this);
		}
	};
}
