#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xEB090A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xEB09140)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayExternalInputBridgeBehavior_TypeDefinitionIndex = 72831;

	class Scene_InstanceArrayExternalInputBridgeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

	};
}
