#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"
class BPLFICOBKKK;

#define RPG_CLIENT_PLAYERMEMORYRECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE68BEE0)
#define RPG_CLIENT_PLAYERMEMORYRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE68BF10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerMemoryRecordData_TypeDefinitionIndex = 65718;

	class PlayerMemoryRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMEMORYRECORDDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::BPLFICOBKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPLFICOBKKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMEMORYRECORDDATA_SYNC_OFFSET))(this, a1);
		}

	};
}
