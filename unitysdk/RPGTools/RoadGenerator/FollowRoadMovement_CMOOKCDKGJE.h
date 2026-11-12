#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineTransposer; }

#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CMOOKCDKGJE_CTOR_OFFSET UNITYSDK_OFFSET(0xF3818B0)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int FollowRoadMovement_CMOOKCDKGJE_TypeDefinitionIndex = 49918;

	class FollowRoadMovement_CMOOKCDKGJE : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineTransposer* ENDNGFJNBHN; // 0x10
		::UnityEngine::Vector3 HPNHODGPGLI; // 0x18
		::UnityEngine::Vector3 NHFOKNJCFEG; // 0x24
		::System::Single IEHPFADHJFD; // 0x30
		::System::Single PMHMEGEJDGP; // 0x34
		::System::Boolean IOBJFEJFLJP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CMOOKCDKGJE_CTOR_OFFSET))(this);
		}

	};
}
