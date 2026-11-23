#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Composites/AxisComposite_F0B82D9C1D4B9CE5.h"
#include "unitysdk/A51FD0B221815D6B.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3F46490)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_GET_MIDPOINT_OFFSET UNITYSDK_OFFSET(0x3F46690)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x3F46520)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F46640)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int AxisComposite_TypeDefinitionIndex = 14174;

	class AxisComposite
	{
	public:
		::System::Int32 negative; // 0x10
		::System::Int32 positive; // 0x14
		::System::Single minValue; // 0x18
		::System::Single maxValue; // 0x1C
		::UnityEngine::InputSystem::Composites::AxisComposite_F0B82D9C1D4B9CE5 whichSideWins; // 0x20

		::System::Single EvaluateMagnitude(::A51FD0B221815D6B& E6CE7391633EEC68)
		{
			return ((::System::Single(*)(::PVOID, ::A51FD0B221815D6B&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, E6CE7391633EEC68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE__CTOR_OFFSET))(this);
		}

		::System::Single get_midPoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_GET_MIDPOINT_OFFSET))(this);
		}

		::System::Single ReadValue(::A51FD0B221815D6B& E6CE7391633EEC68)
		{
			return ((::System::Single(*)(::PVOID, ::A51FD0B221815D6B&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_AXISCOMPOSITE_READVALUE_OFFSET))(this, E6CE7391633EEC68);
		}
	};
}
