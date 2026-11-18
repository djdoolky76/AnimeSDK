#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Type; }
namespace UnityEngine { class GUIContent; }

#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x1D076D50)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1D077340)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1D076D70)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x1D076D60)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1D076D90)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0x1D076D80)
#define UNITYENGINE_RENDERING_DEBUGUI_BITFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D077350)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BitField_TypeDefinitionIndex = 17846;

	class DebugUI_BitField
	{
	public:
		::Il2CppArray<::UnityEngine::GUIContent*>* _enumNames_k__BackingField; // 0x50
		::Il2CppArray<::System::Int32>* _enumValues_k__BackingField; // 0x58
		::System::Type* m_EnumType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GUIContent*>* get_enumNames()
		{
			return ((::Il2CppArray<::UnityEngine::GUIContent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMNAMES_OFFSET))(this);
		}

		::System::Void set_enumNames(::Il2CppArray<::UnityEngine::GUIContent*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUIContent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMNAMES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_enumValues()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMVALUES_OFFSET))(this);
		}

		::System::Void set_enumValues(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMVALUES_OFFSET))(this, value);
		}

		::System::Void set_enumType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_SET_ENUMTYPE_OFFSET))(this, value);
		}

		::System::Type* get_enumType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BITFIELD_GET_ENUMTYPE_OFFSET))(this);
		}
	};
}
