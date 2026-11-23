#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class StyleProperty; }

#define UNITYENGINE_UIELEMENTS_STYLERULE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define UNITYENGINE_UIELEMENTS_STYLERULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleRule_TypeDefinitionIndex = 13673;

	class StyleRule : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::StyleProperty*>* m_Properties; // 0x10
		::System::Int32 line; // 0x18
		::System::Int32 customPropertiesCount; // 0x1C

		::Il2CppArray<::UnityEngine::UIElements::StyleProperty*>* get_properties()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLERULE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLERULE__CTOR_OFFSET))(this);
		}
	};
}
