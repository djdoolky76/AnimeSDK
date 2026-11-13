#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TALKDEBATECOUNTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B0D80)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkDebateCountInfo_TypeDefinitionIndex = 62067;

	class TalkDebateCountInfo : public ::System::Object
	{
	public:
		::System::Int32 LastCount; // 0x10
		::System::Int32 MaxCount; // 0x14
		::System::Int32 CurrentCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKDEBATECOUNTINFO_CTOR_OFFSET))(this);
		}

	};
}
