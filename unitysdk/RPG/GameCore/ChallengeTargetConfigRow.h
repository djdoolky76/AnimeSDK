#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5361B0)
#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D535F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeTargetConfigRow_TypeDefinitionIndex = 12973;

	class ChallengeTargetConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChallengeTargetName; // 0x10
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 ChallengeTargetParam3; // 0x28
		::RPG::GameCore::ChallengeType ChallengeTargetType; // 0x2C
		::System::UInt32 ChallengeTargetParam2; // 0x30
		::System::UInt32 ChallengeTargetParam1; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGETARGETCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeTargetConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
