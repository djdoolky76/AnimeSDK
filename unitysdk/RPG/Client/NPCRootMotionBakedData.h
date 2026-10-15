#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharacterRootMotionBakedData.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

#define RPG_CLIENT_NPCROOTMOTIONBAKEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD930740)

namespace RPG::Client
{
	class NPCRootMotionBakedData : public ::RPG::Client::CharacterRootMotionBakedData
	{
	public:
		::RPG::GameCore::NPCBodySize body; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCROOTMOTIONBAKEDDATA_CTOR_OFFSET))(this);
		}

	};
}
