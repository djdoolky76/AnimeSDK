#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"
class BPLFICOBKKK;

#define RPG_CLIENT_PLAYERSTORYRECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDBEC010)
#define RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDBFE3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerStoryRecordData_TypeDefinitionIndex = 64274;

	class PlayerStoryRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::BPLFICOBKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPLFICOBKKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSTORYRECORDDATA_SYNC_OFFSET))(this, a1);
		}

	};
}
