#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xD4DCAA0)
#define RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD4DD490)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_RuntimeSlider_TypeDefinitionIndex = 72973;

	class LoopGenerator_RuntimeSlider : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TargetGo; // 0x10
		::System::Single Length; // 0x18
		::UnityEngine::Vector2 Extents; // 0x1C
		::System::Boolean IsUsed; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 TemplateIndex; // 0x28
		::System::Single PositionOnTrack; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER_CTOR_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER_ABKBOGIGAEH_OFFSET))(this);
		}

	};
}
