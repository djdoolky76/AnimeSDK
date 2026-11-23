#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueHandle.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleProperty_TypeDefinitionIndex = 14072;

	class StyleProperty : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::System::Int32 m_Line; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>* m_Values; // 0x20
		::System::Boolean isCustomProperty; // 0x28
		::System::Boolean requireVariableResolve; // 0x29

		::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>* get_values()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleValueHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_VALUES_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_NAME_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
