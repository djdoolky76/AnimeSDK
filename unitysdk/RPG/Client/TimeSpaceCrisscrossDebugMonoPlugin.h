#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE28E9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossDebugMonoPlugin_TypeDefinitionIndex = 70200;

	class TimeSpaceCrisscrossDebugMonoPlugin
	{
	public:
		::UnityEngine::Vector3 ConePotisionA; // 0x30
		::UnityEngine::Vector3 ConeDirectionA; // 0x3C
		::System::Single ConeAngleA; // 0x48
		::System::Single ConeDistanceA; // 0x4C
		::System::Boolean EnableConeA; // 0x50
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 ConePotisionB; // 0x54
		::UnityEngine::Vector3 ConeDirectionB; // 0x60
		::System::Single ConeAngleB; // 0x6C
		::System::Single ConeDistanceB; // 0x70
		::System::Boolean EnableConeB; // 0x74
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 ConePotisionC; // 0x78
		::UnityEngine::Vector3 ConeDirectionC; // 0x84
		::System::Single ConeAngleC; // 0x90
		::System::Single ConeDistanceC; // 0x94
		::System::Boolean EnableConeC; // 0x98
		::System::Byte _padding2[0x3];
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState TSCState; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
