#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_PINBALLSUBSYSTEM_EXTERNALMOVEINTENT_GET_CANAPPLY_OFFSET UNITYSDK_OFFSET(0x7241B0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_ExternalMoveIntent_TypeDefinitionIndex = 56741;

	struct alignas(4) PinballSubsystem_ExternalMoveIntent
	{
		::System::Boolean HasInput; // 0x10
		::System::Boolean Allowed; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 Velocity; // 0x14

		::System::Boolean get_CanApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_EXTERNALMOVEINTENT_GET_CANAPPLY_OFFSET))(this);
		}
	};
}
