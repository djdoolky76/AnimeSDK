#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2ChallengerRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82E6E0)
#define RPG_GAMECORE_MATCHTHREEV2CHALLENGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82E3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2ChallengerRow_TypeDefinitionIndex = 11944;

	class MatchThreeV2ChallengerRow : public ::System::Object
	{
	public:
		::System::String* ChallengerImage; // 0x10
		::Il2CppArray<::System::UInt32>* StarTargetList; // 0x18
		::System::UInt32 LevelID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChallengerTitle; // 0x28
		::RPG::Client::TextID ChallengerDesc; // 0x38
		::System::UInt32 ChallengerID; // 0x48
		::System::UInt32 UnlockBattleItem; // 0x4C
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
