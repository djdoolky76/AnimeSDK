#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TECHART_OBBVISUALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x2864410)

namespace TechArt
{
	inline static constexpr unsigned int OBBVisualizer_TypeDefinitionIndex = 16052;

	class OBBVisualizer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::E46B881AA2636190 obbColor; // 0x20
		::System::Boolean showVolume; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single axisLength; // 0x34
		::System::Boolean showAxes; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TECHART_OBBVISUALIZER__CTOR_OFFSET))(this);
		}
	};
}
