#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading_B2BE8C91EFF68BB5.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_HEADING__CTOR_OFFSET UNITYSDK_OFFSET(0x2A41DB0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_Heading_TypeDefinitionIndex = 18327;

	struct alignas(4) CinemachineOrbitalTransposer_Heading
	{
		::Cinemachine::CinemachineOrbitalTransposer_Heading_B2BE8C91EFF68BB5 m_Definition; // 0x10
		::System::Int32 m_VelocityFilterStrength; // 0x14
		::System::Single m_Bias; // 0x18

		::System::Void _ctor(::Cinemachine::CinemachineOrbitalTransposer_Heading_B2BE8C91EFF68BB5 FBABE030F0470058, ::System::Int32 FB3FEEBF37CFFF11, ::System::Single F9A489BE05BD61E4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer_Heading_B2BE8C91EFF68BB5, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_HEADING__CTOR_OFFSET))(this, FBABE030F0470058, FB3FEEBF37CFFF11, F9A489BE05BD61E4);
		}
	};
}
