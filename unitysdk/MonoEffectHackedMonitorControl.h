#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Renderer; }

#define MONOEFFECTHACKEDMONITORCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4D9F0)
#define MONOEFFECTHACKEDMONITORCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xBA4D8F0)

inline static constexpr unsigned int MonoEffectHackedMonitorControl_TypeDefinitionIndex = 47460;

	class MonoEffectHackedMonitorControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single hackedProgress; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* Renderer; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTHACKEDMONITORCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTHACKEDMONITORCONTROL_UPDATE_OFFSET))(this);
		}

	};
