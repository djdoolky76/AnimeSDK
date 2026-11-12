#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"
class BAMPJJAPJJG;
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define BAPEECBHOID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA31680)

inline static constexpr unsigned int BAPEECBHOID_TypeDefinitionIndex = 44848;

	class BAPEECBHOID : public ::System::Object
	{
	public:
		::BAMPJJAPJJG* CAHCLIMGPFF; // 0x10
		::RPG::GameCore::ChenLingBattleTriggerCallback* IMDLGFPMPEK; // 0x18
		::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType BJMGCHAHKAI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPEECBHOID_CTOR_OFFSET))(this);
		}

	};
