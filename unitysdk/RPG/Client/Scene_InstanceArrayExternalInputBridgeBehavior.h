#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE09E950)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE09E9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayExternalInputBridgeBehavior_TypeDefinitionIndex = 70852;

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
