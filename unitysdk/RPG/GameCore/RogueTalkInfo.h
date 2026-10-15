#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalkInfo; }

#define RPG_GAMECORE_ROGUETALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2F5C0)
#define RPG_GAMECORE_ROGUETALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2F480)

namespace RPG::GameCore
{
	class RogueTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::Single TextSpeed; // 0x14
		::System::UInt32 TalkBgID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
