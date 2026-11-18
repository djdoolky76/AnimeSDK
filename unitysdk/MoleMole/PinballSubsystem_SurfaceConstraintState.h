#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;

#define MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x12B8A300)
#define MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x12B8A070)
#define MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_GET_HASCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x363D90)
#define MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_GET_HASSTOPPER_OFFSET UNITYSDK_OFFSET(0x6EE240)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_SurfaceConstraintState_TypeDefinitionIndex = 56763;

	struct alignas(8) PinballSubsystem_SurfaceConstraintState
	{
		::MGBBDIIJPFJ* Surface; // 0x10
		::UnityEngine::Vector3 Normal; // 0x18
		::UnityEngine::Vector3 Tangent; // 0x24
		::UnityEngine::Vector3 StopperNormal; // 0x30

		::System::Boolean get_HasConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_GET_HASCONSTRAINT_OFFSET))(this);
		}

		::System::Boolean get_HasStopper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_GET_HASSTOPPER_OFFSET))(this);
		}

		/*
		static ::MoleMole::PinballSubsystem_SurfaceConstraintState Create(::MGBBDIIJPFJ* surface, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 tangent)
		{
			return ((::MoleMole::PinballSubsystem_SurfaceConstraintState(*)(::MGBBDIIJPFJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_CREATE_OFFSET))(surface, normal, tangent);
		}
		*/

		/*
		static ::MoleMole::PinballSubsystem_SurfaceConstraintState Create_1(::MGBBDIIJPFJ* surface, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 stopperNormal)
		{
			return ((::MoleMole::PinballSubsystem_SurfaceConstraintState(*)(::MGBBDIIJPFJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_SURFACECONSTRAINTSTATE_CREATE_1_OFFSET))(surface, normal, tangent, stopperNormal);
		}
		*/
	};
}
