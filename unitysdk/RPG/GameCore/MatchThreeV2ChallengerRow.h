#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2ChallengerRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85C0D0)
#define RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85BDC0)

namespace RPG::GameCore
{
	class MatchThreeV2ChallengerRow : public ::System::Object
	{
	public:
		::System::String* ChallengerImage; // 0x10
		::Il2CppArray<::System::UInt32>* StarTargetList; // 0x18
		::System::UInt32 ChallengerID; // 0x20
		::System::UInt32 UnlockBattleItem; // 0x24
		::RPG::Client::TextID ChallengerTitle; // 0x28
		::System::UInt32 LevelID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChallengerDesc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2ChallengerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2ChallengerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
