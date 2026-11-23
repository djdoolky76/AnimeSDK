#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TemplateAsset_AttributeOverride_TypeDefinitionIndex = 13204;

	struct alignas(8) TemplateAsset_AttributeOverride
	{
		::System::String* m_ElementName; // 0x10
		::System::String* m_AttributeName; // 0x18
		::System::String* m_Value; // 0x20
	};
}
