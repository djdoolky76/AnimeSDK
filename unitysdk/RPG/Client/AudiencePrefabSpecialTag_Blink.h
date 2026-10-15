#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudiencePrefabSpecialTag.h"
#include "unitysdk/RPG/Client/EAudiencePrefabSpecialTag.h"

#define RPG_CLIENT_AUDIENCEPREFABSPECIALTAG_BLINK_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B2BB0)
#define RPG_CLIENT_AUDIENCEPREFABSPECIALTAG_BLINK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC6B2BA0)

namespace RPG::Client
{
	class AudiencePrefabSpecialTag_Blink : public ::RPG::Client::AudiencePrefabSpecialTag
	{
	public:
		::System::Int32 FaceIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEPREFABSPECIALTAG_BLINK_CTOR_OFFSET))(this);
		}

		::RPG::Client::EAudiencePrefabSpecialTag get_Type()
		{
			return ((::RPG::Client::EAudiencePrefabSpecialTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEPREFABSPECIALTAG_BLINK_GET_TYPE_OFFSET))(this);
		}

	};
}
