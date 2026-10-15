#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FKHKLMEBJKH;

#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBF0F00)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG_GETTEAMMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0xCBF0E70)

namespace RPG::Client::Dev
{
	inline static constexpr unsigned int VirtualServerLaunchConfig_TypeDefinitionIndex = 82121;

	class VirtualServerLaunchConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::FKHKLMEBJKH*>* Lineup; // 0x10
		::Il2CppArray<::HNOHHOEPFHC>* MultiPathAvatarTypes; // 0x18
		::System::UInt32 PlaneID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 DimensionID; // 0x28
		::RPG::GameCore::GenderType GenderType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG_CTOR_OFFSET))(this);
		}

		::FKHKLMEBJKH* GetTeamMemberConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::FKHKLMEBJKH*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHCONFIG_GETTEAMMEMBERCONFIG_OFFSET))(this, a1, a2);
		}

	};
}
