#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFDJGBJKGPL.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballPaddleData_TypeDefinitionIndex = 66355;

	struct alignas(4) PinballPaddleData
	{
		::KFDJGBJKGPL PaddleSide; // 0x10
		::UnityEngine::Vector3 EjectPivotLocalPosition; // 0x14
	};
}
