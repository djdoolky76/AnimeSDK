#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Flags.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { template <typename T> class ListChangedEventArgs_1; }
namespace UnityEngine::Rendering { template <typename T> class ObservableList_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_ADD_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1D07A190)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D07A770)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1D07A170)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D079FB0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_EDITORFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D07A120)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1D079F90)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1D079FD0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISEDITORONLY_OFFSET UNITYSDK_OFFSET(0x1D07A000)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISINACTIVEINEDITOR_OFFSET UNITYSDK_OFFSET(0x1D07A0A0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISRUNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x1D07A050)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x1D079FF0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x1D07A630)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x1D07A6D0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_REMOVE_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x1D07A210)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1D078250)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1D07A180)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D079FC0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1D079FA0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1D079FE0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL_SYSTEM_ICOMPARABLE_UNITYENGINE_RENDERING_DEBUGUI_PANEL__COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D07AB10)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07A290)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D07AB80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Panel_TypeDefinitionIndex = 17852;

	class DebugUI_Panel : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* onSetDirty; // 0x10
		::System::String* _displayName_k__BackingField; // 0x18
		::UnityEngine::Rendering::ObservableList_1<::System::Object*>* _children_k__BackingField; // 0x20
		::System::Int32 _groupIndex_k__BackingField; // 0x28
		::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::DebugUI_Flags get_flags()
		{
			return ((::UnityEngine::Rendering::DebugUI_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_flags(::UnityEngine::Rendering::DebugUI_Flags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Flags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_FLAGS_OFFSET))(this, value);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Int32 get_groupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_GROUPINDEX_OFFSET))(this);
		}

		::System::Void set_groupIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_GROUPINDEX_OFFSET))(this, value);
		}

		::System::String* get_queryPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_QUERYPATH_OFFSET))(this);
		}

		::System::Boolean get_isEditorOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISEDITORONLY_OFFSET))(this);
		}

		::System::Boolean get_isRuntimeOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISRUNTIMEONLY_OFFSET))(this);
		}

		::System::Boolean get_isInactiveInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_ISINACTIVEINEDITOR_OFFSET))(this);
		}

		::System::Boolean get_editorForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_EDITORFORCEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Rendering::ObservableList_1<::System::Object*>* get_children()
		{
			return ((::UnityEngine::Rendering::ObservableList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_children(::UnityEngine::Rendering::ObservableList_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SET_CHILDREN_OFFSET))(this, value);
		}

		::System::Void add_onSetDirty(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_ADD_ONSETDIRTY_OFFSET))(this, value);
		}

		::System::Void remove_onSetDirty(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_REMOVE_ONSETDIRTY_OFFSET))(this, value);
		}

		::System::Void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::System::Object*>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<::System::Object*>* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::System::Object*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMADDED_OFFSET))(this, sender, e);
		}

		::System::Void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::System::Object*>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<::System::Object*>* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ObservableList_1<::System::Object*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_ONITEMREMOVED_OFFSET))(this, sender, e);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SETDIRTY_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(::UnityEngine::Rendering::DebugUI_Panel* other)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL_SYSTEM_ICOMPARABLE_UNITYENGINE_RENDERING_DEBUGUI_PANEL__COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
