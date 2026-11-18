#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class IStylePainter; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MeshGenerationContext_TypeDefinitionIndex = 27597;

	class MeshGenerationContext : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::IStylePainter* painter; // 0x10
	};
}
