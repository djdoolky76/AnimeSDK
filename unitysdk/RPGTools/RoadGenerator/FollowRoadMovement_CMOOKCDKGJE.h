#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineTransposer; }

#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CMOOKCDKGJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD58620)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int FollowRoadMovement_CMOOKCDKGJE_TypeDefinitionIndex = 49918;

	class FollowRoadMovement_CMOOKCDKGJE : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineTransposer* ENDNGFJNBHN; // 0x10
		::System::Single IEHPFADHJFD; // 0x18
		::System::Boolean IOBJFEJFLJP; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 NHFOKNJCFEG; // 0x20
		::UnityEngine::Vector3 HPNHODGPGLI; // 0x2C
		::System::Single PMHMEGEJDGP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT_CMOOKCDKGJE_CTOR_OFFSET))(this);
		}

	};
}
