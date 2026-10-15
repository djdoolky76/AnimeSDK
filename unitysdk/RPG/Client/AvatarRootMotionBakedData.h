#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharacterRootMotionBakedData.h"
#include "unitysdk/RPG/GameCore/BodySize.h"

#define RPG_CLIENT_AVATARROOTMOTIONBAKEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC711330)

namespace RPG::Client
{
	class AvatarRootMotionBakedData : public ::RPG::Client::CharacterRootMotionBakedData
	{
	public:
		::RPG::GameCore::BodySize body; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARROOTMOTIONBAKEDDATA_CTOR_OFFSET))(this);
		}

	};
}
