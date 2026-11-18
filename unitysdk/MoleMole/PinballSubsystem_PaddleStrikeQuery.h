#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;
namespace UnityEngine { class Collider; }

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PaddleStrikeQuery_TypeDefinitionIndex = 56752;

	struct alignas(8) PinballSubsystem_PaddleStrikeQuery
	{
		::MGBBDIIJPFJ* Mover; // 0x10
		::MGBBDIIJPFJ* Paddle; // 0x18
		::UnityEngine::Collider* PaddleCollider; // 0x20
		::UnityEngine::Vector3 MoverCenter; // 0x28
		::System::Single MoverRadius; // 0x34
	};
}
