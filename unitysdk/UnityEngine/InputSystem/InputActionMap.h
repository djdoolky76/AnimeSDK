#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A651DEB7A137AF10.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_A70727AD923BF3E4.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_FD06654F2A5AC989.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/System/Guid.h"

class A087362547CDC4E5;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
template <typename T> class F875E7A8F1781006;

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARACTIONLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x3F4B200)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARCACHEDACTIONDATA_OFFSET UNITYSDK_OFFSET(0x3F4B250)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLONE_OFFSET UNITYSDK_OFFSET(0x3F4B2B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISABLE_OFFSET UNITYSDK_OFFSET(0x3F4B5B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3F4B5E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ENABLE_OFFSET UNITYSDK_OFFSET(0x3F4B600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_1_OFFSET UNITYSDK_OFFSET(0x3F4B9D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x3F4B670)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_1_OFFSET UNITYSDK_OFFSET(0x3F4BA90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET UNITYSDK_OFFSET(0x3F4BB80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDINGRELATIVETOMAP_OFFSET UNITYSDK_OFFSET(0x3F4BCC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x3F4BD80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GENERATEID_OFFSET UNITYSDK_OFFSET(0x3F4BFF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETBINDINGSFORSINGLEACTION_OFFSET UNITYSDK_OFFSET(0x3F4C040)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETCONTROLSFORSINGLEACTION_OFFSET UNITYSDK_OFFSET(0x3F4C0E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3F4C180)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x3F4E590)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET UNITYSDK_OFFSET(0x3F4E5F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x3F4E600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x3F4E610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x3F4E670)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x3F4E680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F4E750)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_IDDONTGENERATE_OFFSET UNITYSDK_OFFSET(0x3F4E760)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ID_OFFSET UNITYSDK_OFFSET(0x3F4E7B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NEEDTORESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x3F4E830)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ISUSABLEWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x3F4C240)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_LAZYRESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x3F4C3B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x3F4C470)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONSETUPCHANGED_OFFSET UNITYSDK_OFFSET(0x3F4C5D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONWANTTOCHANGESETUP_OFFSET UNITYSDK_OFFSET(0x3F4C880)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGSIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x3F4CB10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x3F4CB50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPACTIONLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x3F4D780)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPPERACTIONCONTROLANDBINDINGARRAYS_OFFSET UNITYSDK_OFFSET(0x3F4D8D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET UNITYSDK_OFFSET(0x3F4E840)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x3F4E860)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x3F4E880)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_NEEDTORESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x3F4E8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3F4C180)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x3F4E400)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F4E410)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3F4E4D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x3F4E520)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_TypeDefinitionIndex = 14167;

	class InputActionMap : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_DeferBindingResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InputActionMap_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_s_NeedToResolveBindings()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputActionMap_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		::System::String* m_Name; // 0x10
		::System::String* m_Id; // 0x18
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::InputAction*>* m_Actions; // 0x28
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* m_Bindings; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* m_BindingsForEachAction; // 0x38
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* m_ControlsForEachAction; // 0x40
		::System::Int32 m_EnabledActionsCount; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::InputSystem::InputAction* m_SingletonAction; // 0x50
		::System::Int32 m_MapIndexInState; // 0x58
		::System::Byte _padding1[0x4];
		::A087362547CDC4E5* m_State; // 0x60
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask; // 0x68
		::System::Byte _padding2[0x58];
		::UnityEngine::InputSystem::InputActionMap_A70727AD923BF3E4 m_Flags; // 0xC8
		::System::Int32 m_ParameterOverridesCount; // 0xCC
		::Il2CppArray<::System::Object*>* m_ParameterOverrides; // 0xD0
		::UnityEngine::InputSystem::InputActionMap_FD06654F2A5AC989 m_Devices; // 0xD8
		::A651DEB7A137AF10<::System::Action_1<::System::Object*>*> m_ActionCallbacks; // 0xE8
		::System::Byte _padding3[0x48];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* m_ActionIndexByNameOrId; // 0x138

		::System::Boolean get_bindingResolutionNeedsFullReResolve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ENABLE_OFFSET))(this);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction* BC288918C940C7A6)
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETBINDINGSFORSINGLEACTION_OFFSET))(this, BC288918C940C7A6);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ASSET_OFFSET))(this);
		}

		::System::Void OnWantToChangeSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONWANTTOCHANGESETUP_OFFSET))(this);
		}

		::System::Void set_bindingsForEachActionInitialized(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void GenerateId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GENERATEID_OFFSET))(this);
		}

		::System::Void ClearActionLookupTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARACTIONLOOKUPTABLE_OFFSET))(this);
		}

		::System::Nullable_1<::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputDevice*>> get_devices()
		{
			return ((::System::Nullable_1<::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_DEVICES_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding B9734AD19DA91385, ::UnityEngine::InputSystem::InputAction*& BC288918C940C7A6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputAction*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDING_OFFSET))(this, B9734AD19DA91385, BC288918C940C7A6);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding> get_bindings()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGS_OFFSET))(this);
		}

		::System::Guid get_idDontGenerate()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_IDDONTGENERATE_OFFSET))(this);
		}

		::System::Boolean get_controlsForEachActionInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET))(this);
		}

		::System::Void ResolveBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOSTRING_OFFSET))(this);
		}

		::System::Void set_needToResolveBindings(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_NEEDTORESOLVEBINDINGS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::InputActionMap* Clone()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLONE_OFFSET))(this);
		}

		::F875E7A8F1781006<::UnityEngine::InputSystem::InputAction*>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::UnityEngine::InputSystem::InputAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void set_bindingResolutionNeedsFullReResolve(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGRESOLUTIONNEEDSFULLRERESOLVE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_controlsForEachActionInitialized(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_CONTROLSFOREACHACTIONINITIALIZED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputAction*> get_actions()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputAction*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ACTIONS_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_OFFSET))(this, F79B4D487F303AB2);
		}

		::System::Int32 FindActionIndex(::System::String* AC38936A6F9D2D16)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET))(this, AC38936A6F9D2D16);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ENABLED_OFFSET))(this);
		}

		::System::Void OnSetupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONSETUPCHANGED_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Boolean get_needToResolveBindings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NEEDTORESOLVEBINDINGS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* B76F894ED23CB415, ::System::Boolean BE734305799BAF73)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET))(this, B76F894ED23CB415, BE734305799BAF73);
		}

		::System::Int32 FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding B9734AD19DA91385)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDINGRELATIVETOMAP_OFFSET))(this, B9734AD19DA91385);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputControl*> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction* BC288918C940C7A6)
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETCONTROLSFORSINGLEACTION_OFFSET))(this, BC288918C940C7A6);
		}

		::System::Boolean LazyResolveBindings(::System::Boolean EFEB39A04DF6C160)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_LAZYRESOLVEBINDINGS_OFFSET))(this, EFEB39A04DF6C160);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISABLE_OFFSET))(this);
		}

		::System::Guid get_id()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ID_OFFSET))(this);
		}

		::System::Boolean IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* B9AD68262157E9E0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ISUSABLEWITHDEVICE_OFFSET))(this, B9AD68262157E9E0);
		}

		::System::Int32 FindActionIndex_1(::System::Guid F5AEFA05C9F71B82)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_1_OFFSET))(this, F5AEFA05C9F71B82);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SetUpPerActionControlAndBindingArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPPERACTIONCONTROLANDBINDINGARRAYS_OFFSET))(this);
		}

		::System::Boolean ResolveBindingsIfNecessary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGSIFNECESSARY_OFFSET))(this);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_1_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* FindAction_1(::System::Guid F5AEFA05C9F71B82)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_1_OFFSET))(this, F5AEFA05C9F71B82);
		}

		::System::Boolean get_bindingsForEachActionInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGSFOREACHACTIONINITIALIZED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NAME_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISPOSE_OFFSET))(this);
		}

		::System::Void SetUpActionLookupTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPACTIONLOOKUPTABLE_OFFSET))(this);
		}

		::System::Void ClearCachedActionData(::System::Boolean BFF3997AEF614032)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARCACHEDACTIONDATA_OFFSET))(this, BFF3997AEF614032);
		}
	};
}
