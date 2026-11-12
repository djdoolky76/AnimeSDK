#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideChallengeRankRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E21D0)
#define RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5E1A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeRankRow_TypeDefinitionIndex = 10932;

	class AetherDivideChallengeRankRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Boolean IsHard; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ChallengeRank; // 0x1C
		::RPG::Client::TextID UnlockText; // 0x20
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 TrainerLevel; // 0x34
		::System::UInt32 FunctionUnlockID; // 0x38
		::System::UInt32 PreRank; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideChallengeRankRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDECHALLENGERANKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
