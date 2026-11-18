#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CustomYieldInstruction.h"

namespace UnityEngine { class AsyncInstantiateOperation; }

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncInstantiateOperation_1_TypeDefinitionIndex = 5323;

	template <typename T>
	class AsyncInstantiateOperation_1 : public ::UnityEngine::CustomYieldInstruction
	{
	public:
		::UnityEngine::AsyncInstantiateOperation* m_op; // 0x0
	};
}
