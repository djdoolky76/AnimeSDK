#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleEnum_1_TypeDefinitionIndex = 6000;

	template <typename T>
	struct alignas(8) StyleEnum_1
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x0
		T m_Value; // 0x0
		::System::Int32 m_Specificity; // 0x0
	};
}
