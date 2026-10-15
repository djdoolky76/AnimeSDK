#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFCEEBAGMF;
namespace RPG::Client { class FateBuffSlotData; }

#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCFD7020)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0___SYNCBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xCFD7AC0)

namespace RPG::Client
{
	class FateStatisticsGameSettleDataItem___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::HJFCEEBAGMF* proto; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncBuff_b__0(::RPG::Client::FateBuffSlotData* a1, ::RPG::Client::FateBuffSlotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateBuffSlotData*, ::RPG::Client::FateBuffSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___C__DISPLAYCLASS7_0___SYNCBUFF_B__0_OFFSET))(this, a1, a2);
		}

	};
}
