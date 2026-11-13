#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DebugAction.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class DebugActionDesc; }
namespace UnityEngine::Rendering { class DebugActionState; }
namespace UnityEngine::Rendering { class DebugManager; }
namespace UnityEngine::Rendering { class DebugUI_IContainer; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering { class IDebugData; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerCanvas; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPersistentCanvas; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1E4B75D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONDISPLAYRUNTIMEUICHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B7D00)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E4B7E00)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1E4B7EC0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BA010)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CHANGESELECTION_OFFSET UNITYSDK_OFFSET(0x1E4B8F90)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CHECKPERSISTENTCANVAS_OFFSET UNITYSDK_OFFSET(0x1E4B8230)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B83D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTION_OFFSET UNITYSDK_OFFSET(0x1E4B7AD0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_1_OFFSET UNITYSDK_OFFSET(0x1E4B9A80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET UNITYSDK_OFFSET(0x1E4B9970)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETPANEL_OFFSET UNITYSDK_OFFSET(0x1E4A20D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1E4B8970)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYEDITORUI_OFFSET UNITYSDK_OFFSET(0x1E4B7F80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x1E4B81B0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x1E4B7FA0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E4A2070)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_GET_PANELS_OFFSET UNITYSDK_OFFSET(0x1E4B7C10)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_ONPANELDIRTY_OFFSET UNITYSDK_OFFSET(0x1E4B90D0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REDRAWONSCREENDEBUG_OFFSET UNITYSDK_OFFSET(0x1E4B8650)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REFRESHEDITOR_OFFSET UNITYSDK_OFFSET(0x1E4B85F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1E4B6AF0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERDATA_OFFSET UNITYSDK_OFFSET(0x1E4B8690)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x1E4B7B10)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1E4B8F60)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_1_OFFSET UNITYSDK_OFFSET(0x1E4B9180)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET UNITYSDK_OFFSET(0x1E4A2610)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONDISPLAYRUNTIMEUICHANGED_OFFSET UNITYSDK_OFFSET(0x1E4B7D80)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E4B7E60)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1E4B7F20)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1E4B8600)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SAMPLEACTION_OFFSET UNITYSDK_OFFSET(0x1E4B76C0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x1E4B81F0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYRUNTIMEUI_OFFSET UNITYSDK_OFFSET(0x1E4B7FC0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEEDITORUI_OFFSET UNITYSDK_OFFSET(0x1E4B7F90)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1E4B8FB0)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UNREGISTERDATA_OFFSET UNITYSDK_OFFSET(0x1E4B8800)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTIONS_OFFSET UNITYSDK_OFFSET(0x1E4B7A70)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTION_OFFSET UNITYSDK_OFFSET(0x1E4B7A10)
#define UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEREADONLYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1E4B7B20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugManager_TypeDefinitionIndex = 36444;

	class DebugManager : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onDisplayRuntimeUIChanged; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::DebugActionState*>* m_DebugActionStates; // 0x18
		::UnityEngine::GameObject* m_PersistentRoot; // 0x20
		::System::Action* onSetDirty; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* m_Panels; // 0x30
		::Il2CppArray<::UnityEngine::Rendering::DebugActionDesc*>* m_DebugActions; // 0x38
		::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* m_RootUIPersistentCanvas; // 0x40
		::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* m_RootUICanvas; // 0x48
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>* m_ReadOnlyPanels; // 0x50
		::System::Action* resetData; // 0x58
		::UnityEngine::GameObject* m_Root; // 0x60
		::System::Boolean refreshEditorRequested; // 0x68
		::System::Boolean m_EditorOpen; // 0x69
		static ::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>** StaticGet_s_Instance()
		{
			return (::System::Lazy_1<::UnityEngine::Rendering::DebugManager*>**)UnitySDK::FromName("UnityEngine.Rendering", "DebugManager")->GetStaticField(0x5F740);
		}

		// static const ::System::String* kEnableDebugBtn1; // 0x0
		// static const ::System::String* kEnableDebugBtn2; // 0x0
		// static const ::System::String* kDebugPreviousBtn; // 0x0
		// static const ::System::String* kDebugNextBtn; // 0x0
		// static const ::System::String* kValidateBtn; // 0x0
		// static const ::System::String* kPersistentBtn; // 0x0
		// static const ::System::String* kDPadVertical; // 0x0
		// static const ::System::String* kDPadHorizontal; // 0x0
		// static const ::System::String* kMultiplierBtn; // 0x0
		// static const ::System::String* kResetBtn; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CCTOR_OFFSET))();
		}

		::System::Void RegisterActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERACTIONS_OFFSET))(this);
		}

		::System::Void AddAction(::UnityEngine::Rendering::DebugAction a1, ::UnityEngine::Rendering::DebugActionDesc* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugAction, ::UnityEngine::Rendering::DebugActionDesc*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADDACTION_OFFSET))(this, a1, a2);
		}

		::System::Void SampleAction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SAMPLEACTION_OFFSET))(this, a1);
		}

		::System::Void UpdateAction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTION_OFFSET))(this, a1);
		}

		::System::Void UpdateActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEACTIONS_OFFSET))(this);
		}

		::System::Single GetAction(::UnityEngine::Rendering::DebugAction a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rendering::DebugAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETACTION_OFFSET))(this, a1);
		}

		::System::Void RegisterInputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERINPUTS_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::DebugManager* get_instance()
		{
			return ((::UnityEngine::Rendering::DebugManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void UpdateReadOnlyCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UPDATEREADONLYCOLLECTION_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>* get_panels()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_PANELS_OFFSET))(this);
		}

		::System::Void add_onDisplayRuntimeUIChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONDISPLAYRUNTIMEUICHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_onDisplayRuntimeUIChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONDISPLAYRUNTIMEUICHANGED_OFFSET))(this, a1);
		}

		::System::Void add_onSetDirty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_ONSETDIRTY_OFFSET))(this, a1);
		}

		::System::Void remove_onSetDirty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_ONSETDIRTY_OFFSET))(this, a1);
		}

		::System::Void add_resetData(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ADD_RESETDATA_OFFSET))(this, a1);
		}

		::System::Void remove_resetData(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVE_RESETDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_displayEditorUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYEDITORUI_OFFSET))(this);
		}

		::System::Void ToggleEditorUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEEDITORUI_OFFSET))(this, a1);
		}

		::System::Boolean get_displayRuntimeUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYRUNTIMEUI_OFFSET))(this);
		}

		::System::Void set_displayRuntimeUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYRUNTIMEUI_OFFSET))(this, a1);
		}

		::System::Boolean get_displayPersistentRuntimeUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET))(this);
		}

		::System::Void set_displayPersistentRuntimeUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_SET_DISPLAYPERSISTENTRUNTIMEUI_OFFSET))(this, a1);
		}

		::System::Void RefreshEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REFRESHEDITOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_RESET_OFFSET))(this);
		}

		::System::Void ReDrawOnScreenDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REDRAWONSCREENDEBUG_OFFSET))(this);
		}

		::System::Void RegisterData(::UnityEngine::Rendering::IDebugData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::IDebugData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERDATA_OFFSET))(this, a1);
		}

		::System::Void UnregisterData(::UnityEngine::Rendering::IDebugData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::IDebugData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_UNREGISTERDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETSTATE_OFFSET))(this);
		}

		::System::Void RegisterRootCanvas(::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REGISTERROOTCANVAS_OFFSET))(this, a1);
		}

		::System::Void ChangeSelection(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CHANGESELECTION_OFFSET))(this, a1, a2);
		}

		::System::Void CheckPersistentCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_CHECKPERSISTENTCANVAS_OFFSET))(this);
		}

		::System::Void TogglePersistent(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_TOGGLEPERSISTENT_OFFSET))(this, a1);
		}

		::System::Void OnPanelDirty(::UnityEngine::Rendering::DebugUI_Panel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_ONPANELDIRTY_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::DebugUI_Panel* GetPanel(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Rendering::DebugUI_Panel*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETPANEL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemovePanel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_OFFSET))(this, a1);
		}

		::System::Void RemovePanel_1(::UnityEngine::Rendering::DebugUI_Panel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_REMOVEPANEL_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::DebugUI_Widget* GetItem(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::DebugUI_Widget*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::DebugUI_Widget* GetItem_1(::System::String* a1, ::UnityEngine::Rendering::DebugUI_IContainer* a2)
		{
			return ((::UnityEngine::Rendering::DebugUI_Widget*(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::DebugUI_IContainer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGMANAGER_GETITEM_1_OFFSET))(this, a1, a2);
		}

	};
}
