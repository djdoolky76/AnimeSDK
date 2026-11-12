#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEINFOSIMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A0BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleInfoSimple_TypeDefinitionIndex = 63426;

	class BattleInfoSimple : public ::System::Object
	{
	public:
		::System::Boolean IsReconnect; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 RetCode; // 0x14
		::System::UInt32 StageID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEINFOSIMPLE_CTOR_OFFSET))(this);
		}

	};
}
