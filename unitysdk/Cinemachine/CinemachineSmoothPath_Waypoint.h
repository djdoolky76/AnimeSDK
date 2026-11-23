#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_FROMVECTOR4_OFFSET UNITYSDK_OFFSET(0x2A5FA20)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_GET_ASVECTOR4_OFFSET UNITYSDK_OFFSET(0x2A5FA50)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSmoothPath_Waypoint_TypeDefinitionIndex = 18357;

	struct alignas(4) CinemachineSmoothPath_Waypoint
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single roll; // 0x1C

		::UnityEngine::E8984F4E44AE20E5 get_AsVector4()
		{
			return ((::UnityEngine::E8984F4E44AE20E5(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_GET_ASVECTOR4_OFFSET))(this);
		}

		/*
		static ::Cinemachine::CinemachineSmoothPath_Waypoint FromVector4(::UnityEngine::E8984F4E44AE20E5 F5006C45C2B93A1C)
		{
			return ((::Cinemachine::CinemachineSmoothPath_Waypoint(*)(::UnityEngine::E8984F4E44AE20E5))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_WAYPOINT_FROMVECTOR4_OFFSET))(F5006C45C2B93A1C);
		}
		*/
	};
}
