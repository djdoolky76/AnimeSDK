#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"
class BPLFICOBKKK;

#define RPG_CLIENT_PLAYERBOSSRECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDBE53F0)
#define RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDBE5410)

namespace RPG::Client
{
	class PlayerBossRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::BPLFICOBKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPLFICOBKKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET))(this, a1);
		}

	};
}
