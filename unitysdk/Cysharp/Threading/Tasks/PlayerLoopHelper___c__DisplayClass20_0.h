#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"
namespace System { class Type; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1F166F70)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__DISPLAYCLASS20_0__REMOVERUNNER_B__0_OFFSET UNITYSDK_OFFSET(0x1F168F90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopHelper___c__DisplayClass20_0_TypeDefinitionIndex = 39139;

	class PlayerLoopHelper___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Type* loopRunnerType; // 0x10
		::System::Type* loopRunnerYieldType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveRunner_b__0(::UnityEngine::LowLevel::PlayerLoopSystem a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__DISPLAYCLASS20_0__REMOVERUNNER_B__0_OFFSET))(this, a1);
		}

	};
}
