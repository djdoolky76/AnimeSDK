#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollisions.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int MBGJEDODLED_TypeDefinitionIndex = 92357;

struct alignas(8) MBGJEDODLED
{
	::MoleMole::Vehicle::VehicleCollisions MBAHMLNKAHK; // 0x10
	::MoleMole::Vehicle::VehicleModelNodes CJGAFOBNPOM; // 0x20
	::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB; // 0x30
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x38
	::UnityEngine::Animator* HMKPGDEOLOF; // 0x40
	::UnityEngine::Animator* KGFECNOHGKB; // 0x48
};
