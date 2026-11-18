#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x363D60)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8BBFE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorPart_TypeDefinitionIndex = 27619;

	struct alignas(8) StyleSelectorPart
	{
		::System::String* m_Value; // 0x10
		::UnityEngine::UIElements::StyleSelectorType m_Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::Object* tempData; // 0x20

		::System::String* get_value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleSelectorType get_type()
		{
			return ((::UnityEngine::UIElements::StyleSelectorType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_TYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_TOSTRING_OFFSET))(this);
		}
	};
}
