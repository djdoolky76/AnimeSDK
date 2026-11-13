#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA6D0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x1E4BF980)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1E4BF940)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_SETINDEX_OFFSET UNITYSDK_OFFSET(0x1E4BF960)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITINDEXES_OFFSET UNITYSDK_OFFSET(0x1E4BFEF0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITQUICKSEPARATORS_OFFSET UNITYSDK_OFFSET(0x1E4BFFF0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_AUTOENUM_OFFSET UNITYSDK_OFFSET(0x1E4BF9E0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x1E4BF9B0)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1E4BF950)
#define UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_SETINDEX_OFFSET UNITYSDK_OFFSET(0x1E4BF970)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_EnumField_TypeDefinitionIndex = 36462;

	class DebugUI_EnumField
	{
	public:
		::Il2CppArray<::System::Int32>* indexes; // 0x50
		::System::Action_1<::System::Int32>* _setIndex_k__BackingField; // 0x58
		::Il2CppArray<::System::Int32>* quickSeparators; // 0x60
		::Il2CppArray<::System::Int32>* enumValues; // 0x68
		::Il2CppArray<::UnityEngine::GUIContent*>* enumNames; // 0x70
		::System::Func_1<::System::Int32>* _getIndex_k__BackingField; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_CTOR_OFFSET))(this);
		}

		::System::Func_1<::System::Int32>* get_getIndex()
		{
			return ((::System::Func_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_GETINDEX_OFFSET))(this);
		}

		::System::Void set_getIndex(::System::Func_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_GETINDEX_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Int32>* get_setIndex()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_SETINDEX_OFFSET))(this);
		}

		::System::Void set_setIndex(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_SETINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_currentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_GET_CURRENTINDEX_OFFSET))(this);
		}

		::System::Void set_currentIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_CURRENTINDEX_OFFSET))(this, a1);
		}

		::System::Void set_autoEnum(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_SET_AUTOENUM_OFFSET))(this, a1);
		}

		::System::Void InitQuickSeparators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITQUICKSEPARATORS_OFFSET))(this);
		}

		::System::Void InitIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_ENUMFIELD_INITINDEXES_OFFSET))(this);
		}

	};
}
