#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFSlice; }
namespace UnityEngine { class Transform; }

#define B1B80B3FC6698CF3_E40D10BE4D0D3A7C_A04706A20E28BF2B_OFFSET UNITYSDK_OFFSET(0x2977FC0)
#define B1B80B3FC6698CF3_E40D10BE4D0D3A7C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1B80B3FC6698CF3_E40D10BE4D0D3A7C_TypeDefinitionIndex = 15499;

class B1B80B3FC6698CF3_E40D10BE4D0D3A7C : public ::System::Object
{
public:
	::RayFire::RFSlice* BBE7C7C28E11ED31; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1B80B3FC6698CF3_E40D10BE4D0D3A7C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 A04706A20E28BF2B(::UnityEngine::Transform* BBCFEC7DB309E927)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + B1B80B3FC6698CF3_E40D10BE4D0D3A7C_A04706A20E28BF2B_OFFSET))(this, BBCFEC7DB309E927);
	}
};
