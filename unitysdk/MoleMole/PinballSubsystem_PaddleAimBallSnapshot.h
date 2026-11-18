#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;

#define MOLEMOLE_PINBALLSUBSYSTEM_PADDLEAIMBALLSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x3CF9F0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PaddleAimBallSnapshot_TypeDefinitionIndex = 56739;

	struct alignas(8) PinballSubsystem_PaddleAimBallSnapshot
	{
		::MGBBDIIJPFJ* Ball; // 0x10
		::UnityEngine::Vector3 Center; // 0x18

		::System::Void _ctor(::MGBBDIIJPFJ* ball, ::UnityEngine::Vector3 center)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PADDLEAIMBALLSNAPSHOT__CTOR_OFFSET))(this, ball, center);
		}
	};
}
