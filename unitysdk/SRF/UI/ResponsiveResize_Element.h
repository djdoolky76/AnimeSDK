#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveResize_Element_TypeDefinitionIndex = 35388;

	struct alignas(8) ResponsiveResize_Element
	{
		::Il2CppArray<::System::Object*>* SizeDefinitions; // 0x10
		::UnityEngine::RectTransform* Target; // 0x18
	};
}
