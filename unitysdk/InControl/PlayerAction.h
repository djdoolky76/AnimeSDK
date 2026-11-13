#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/InControl/OneAxisInputControl.h"
#include "unitysdk/InControl/KeyCombo.h"
namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class BindingSourceListener; }
namespace InControl { class DeviceBindingSource; }
namespace InControl { class InputDevice; }
namespace InControl { class PlayerActionSet; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_PLAYERACTION_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x1562DA70)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_1_OFFSET UNITYSDK_OFFSET(0x1562D860)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_2_OFFSET UNITYSDK_OFFSET(0x1562D990)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_3_OFFSET UNITYSDK_OFFSET(0x1562D9E0)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_4_OFFSET UNITYSDK_OFFSET(0x1562DA10)
#define INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_OFFSET UNITYSDK_OFFSET(0x1562D580)
#define INCONTROL_PLAYERACTION_ADDDEVICEBINDING_OFFSET UNITYSDK_OFFSET(0x15630BE0)
#define INCONTROL_PLAYERACTION_ADD_ONBINDINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x1562CFF0)
#define INCONTROL_PLAYERACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1562CF30)
#define INCONTROL_PLAYERACTION_CLEARBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562EA00)
#define INCONTROL_PLAYERACTION_COUNTBINDINGSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1562E5D0)
#define INCONTROL_PLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1562D0F0)
#define INCONTROL_PLAYERACTION_DETECTBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562FE00)
#define INCONTROL_PLAYERACTION_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x1562E120)
#define INCONTROL_PLAYERACTION_GETDEVICEBINDINGSOURCE_OFFSET UNITYSDK_OFFSET(0x15630C40)
#define INCONTROL_PLAYERACTION_GET_ACTIVEDEVICE_OFFSET UNITYSDK_OFFSET(0x156304D0)
#define INCONTROL_PLAYERACTION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1562EF80)
#define INCONTROL_PLAYERACTION_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x15630480)
#define INCONTROL_PLAYERACTION_GET_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15630D30)
#define INCONTROL_PLAYERACTION_GET_ISINLEAVINGCOMBO_OFFSET UNITYSDK_OFFSET(0x15630D50)
#define INCONTROL_PLAYERACTION_GET_ISLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1562EF60)
#define INCONTROL_PLAYERACTION_GET_LASTINPUTTYPEISDEVICE_OFFSET UNITYSDK_OFFSET(0x156303B0)
#define INCONTROL_PLAYERACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15630510)
#define INCONTROL_PLAYERACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1562CEF0)
#define INCONTROL_PLAYERACTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1562CF10)
#define INCONTROL_PLAYERACTION_GET_UNFILTEREDBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562EF90)
#define INCONTROL_PLAYERACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15630530)
#define INCONTROL_PLAYERACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1562D0D0)
#define INCONTROL_PLAYERACTION_HARDREMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x1562E1C0)
#define INCONTROL_PLAYERACTION_HASBINDING_OFFSET UNITYSDK_OFFSET(0x1562E0F0)
#define INCONTROL_PLAYERACTION_INDEXOFFIRSTINVALIDBINDING_OFFSET UNITYSDK_OFFSET(0x1562E8C0)
#define INCONTROL_PLAYERACTION_INSERTBINDINGAT_OFFSET UNITYSDK_OFFSET(0x1562DC80)
#define INCONTROL_PLAYERACTION_LISTENFORBINDINGREPLACING_OFFSET UNITYSDK_OFFSET(0x1562ED40)
#define INCONTROL_PLAYERACTION_LISTENFORBINDING_OFFSET UNITYSDK_OFFSET(0x1562ED30)
#define INCONTROL_PLAYERACTION_LOAD_OFFSET UNITYSDK_OFFSET(0x15630550)
#define INCONTROL_PLAYERACTION_REMOVEBINDINGAT_OFFSET UNITYSDK_OFFSET(0x1562E510)
#define INCONTROL_PLAYERACTION_REMOVEBINDING_OFFSET UNITYSDK_OFFSET(0x1562E4D0)
#define INCONTROL_PLAYERACTION_REMOVEFIRSTBINDINGOFTYPE_OFFSET UNITYSDK_OFFSET(0x1562E710)
#define INCONTROL_PLAYERACTION_REMOVEORPHANEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562EFA0)
#define INCONTROL_PLAYERACTION_REMOVE_ONBINDINGSCHANGED_OFFSET UNITYSDK_OFFSET(0x1562D060)
#define INCONTROL_PLAYERACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1562CF90)
#define INCONTROL_PLAYERACTION_REPLACEBINDING_OFFSET UNITYSDK_OFFSET(0x1562DF00)
#define INCONTROL_PLAYERACTION_RESETBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562EAF0)
#define INCONTROL_PLAYERACTION_SAVE_OFFSET UNITYSDK_OFFSET(0x156308C0)
#define INCONTROL_PLAYERACTION_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1562F190)
#define INCONTROL_PLAYERACTION_SET_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x15630D40)
#define INCONTROL_PLAYERACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15630520)
#define INCONTROL_PLAYERACTION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1562CF00)
#define INCONTROL_PLAYERACTION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1562CF20)
#define INCONTROL_PLAYERACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15630540)
#define INCONTROL_PLAYERACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1562D0E0)
#define INCONTROL_PLAYERACTION_STOPLISTENINGFORBINDING_OFFSET UNITYSDK_OFFSET(0x1562EF20)
#define INCONTROL_PLAYERACTION_UPDATEBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562F1B0)
#define INCONTROL_PLAYERACTION_UPDATEVISIBLEBINDINGS_OFFSET UNITYSDK_OFFSET(0x1562E2F0)
#define INCONTROL_PLAYERACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1562F090)
#define INCONTROL_PLAYERACTION__UPDATECOMBO_OFFSET UNITYSDK_OFFSET(0x1562FC80)

namespace InControl
{
	inline static constexpr unsigned int PlayerAction_TypeDefinitionIndex = 41781;

	class PlayerAction : public ::InControl::OneAxisInputControl
	{
	public:
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x68
		::Il2CppArray<::InControl::BindingSourceListener*>* bindingSourceListeners; // 0x70
		::InControl::PlayerActionSet* _Owner_k__BackingField; // 0x78
		::System::Action* OnBindingsChanged; // 0x80
		::InControl::BindingListenOptions* ListenOptions; // 0x88
		::InControl::InputDevice* device; // 0x90
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* defaultBindings; // 0x98
		::System::String* _Name_k__BackingField; // 0xA0
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* unfilteredBindings; // 0xA8
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* regularBindings; // 0xB0
		::InControl::InputDevice* activeDevice; // 0xB8
		::System::Object* _UserData_k__BackingField; // 0xC0
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* bindings; // 0xC8
		::System::Collections::Generic::List_1<::InControl::BindingSource*>* visibleBindings; // 0xD0
		::InControl::InputDeviceClass LastDeviceClass; // 0xD8
		::System::Boolean _IsComboDuringReleased; // 0xDC
		::System::Boolean triggerBindingChanged; // 0xDD
		::System::Boolean triggerBindingEnded; // 0xDE
		::System::Boolean _IsComboControl_k__BackingField; // 0xDF
		::InControl::InputDeviceStyle LastDeviceStyle; // 0xE0
		::InControl::BindingSourceType LastInputType; // 0xE4
		::System::UInt64 _ComboReleasedEndFrame; // 0xE8
		::System::UInt64 LastInputTypeChangedTick; // 0xF0
		::System::Void _ctor(::System::String* a1, ::InControl::PlayerActionSet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_NAME_OFFSET))(this, a1);
		}

		::InControl::PlayerActionSet* get_Owner()
		{
			return ((::InControl::PlayerActionSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::InControl::PlayerActionSet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerActionSet*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnBindingsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADD_ONBINDINGSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBindingsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVE_ONBINDINGSCHANGED_OFFSET))(this, a1);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_USERDATA_OFFSET))(this, a1);
		}

		::System::Void AddDefaultBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_OFFSET))(this, a1);
		}

		::System::Void AddDefaultBinding_1(::Il2CppArray<::InControl::Key>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_1_OFFSET))(this, a1);
		}

		::System::Void AddDefaultBinding_2(::InControl::KeyCombo a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_2_OFFSET))(this, a1);
		}

		::System::Void AddDefaultBinding_3(::InControl::Mouse a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_3_OFFSET))(this, a1);
		}

		::System::Void AddDefaultBinding_4(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEFAULTBINDING_4_OFFSET))(this, a1);
		}

		::System::Boolean AddBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDBINDING_OFFSET))(this, a1);
		}

		::System::Boolean InsertBindingAt(::System::Int32 a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_INSERTBINDINGAT_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReplaceBinding(::InControl::BindingSource* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REPLACEBINDING_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_HASBINDING_OFFSET))(this, a1);
		}

		::InControl::BindingSource* FindBinding(::InControl::BindingSource* a1)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_FINDBINDING_OFFSET))(this, a1);
		}

		::System::Void HardRemoveBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_HARDREMOVEBINDING_OFFSET))(this, a1);
		}

		::System::Void RemoveBinding(::InControl::BindingSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEBINDING_OFFSET))(this, a1);
		}

		::System::Void RemoveBindingAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEBINDINGAT_OFFSET))(this, a1);
		}

		::System::Int32 CountBindingsOfType(::InControl::BindingSourceType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_COUNTBINDINGSOFTYPE_OFFSET))(this, a1);
		}

		::System::Void RemoveFirstBindingOfType(::InControl::BindingSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEFIRSTBINDINGOFTYPE_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfFirstInvalidBinding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_INDEXOFFIRSTINVALIDBINDING_OFFSET))(this);
		}

		::System::Void ClearBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_CLEARBINDINGS_OFFSET))(this);
		}

		::System::Void ResetBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_RESETBINDINGS_OFFSET))(this);
		}

		::System::Void ListenForBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LISTENFORBINDING_OFFSET))(this);
		}

		::System::Void ListenForBindingReplacing(::InControl::BindingSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LISTENFORBINDINGREPLACING_OFFSET))(this, a1);
		}

		::System::Void StopListeningForBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_STOPLISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Boolean get_IsListeningForBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISLISTENINGFORBINDING_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* get_Bindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_BINDINGS_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>* get_UnfilteredBindings()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::BindingSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_UNFILTEREDBINDINGS_OFFSET))(this);
		}

		::System::Void RemoveOrphanedBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_REMOVEORPHANEDBINDINGS_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2, ::InControl::InputDevice* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateBindings(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATEBINDINGS_OFFSET))(this, a1, a2);
		}

		::System::Void DetectBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_DETECTBINDINGS_OFFSET))(this);
		}

		::System::Void UpdateVisibleBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_UPDATEVISIBLEBINDINGS_OFFSET))(this);
		}

		::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_Device(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_DEVICE_OFFSET))(this, a1);
		}

		::InControl::InputDevice* get_ActiveDevice()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ACTIVEDEVICE_OFFSET))(this);
		}

		::System::Boolean get_LastInputTypeIsDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_LASTINPUTTYPEISDEVICE_OFFSET))(this);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SAVE_OFFSET))(this, a1);
		}

		::System::Void AddDeviceBinding(::Il2CppArray<::InControl::InputControlType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_ADDDEVICEBINDING_OFFSET))(this, a1);
		}

		::InControl::DeviceBindingSource* GetDeviceBindingSource()
		{
			return ((::InControl::DeviceBindingSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GETDEVICEBINDINGSOURCE_OFFSET))(this);
		}

		::System::Void _UpdateCombo(::System::UInt64 a1, ::InControl::InputDevice* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION__UPDATECOMBO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsComboControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISCOMBOCONTROL_OFFSET))(this);
		}

		::System::Void set_IsComboControl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_SET_ISCOMBOCONTROL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLeavingCombo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERACTION_GET_ISINLEAVINGCOMBO_OFFSET))(this);
		}

	};
}
