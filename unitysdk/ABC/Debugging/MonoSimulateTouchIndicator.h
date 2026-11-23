#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Image; }

#define ABC_DEBUGGING_MONOSIMULATETOUCHINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Debugging
{
	inline static constexpr unsigned int MonoSimulateTouchIndicator_TypeDefinitionIndex = 3268;

	class MonoSimulateTouchIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* IndicatorImg; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_DEBUGGING_MONOSIMULATETOUCHINDICATOR__CTOR_OFFSET))(this);
		}
	};
}
