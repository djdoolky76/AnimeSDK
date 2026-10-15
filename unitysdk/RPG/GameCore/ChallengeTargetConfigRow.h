#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D563C30)
#define RPG_GAMECORE_CHALLENGETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D563990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeTargetConfigRow_TypeDefinitionIndex = 12973;

	class ChallengeTargetConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ChallengeTargetParam2; // 0x10
		::System::UInt32 ChallengeTargetParam3; // 0x14
		::RPG::GameCore::ChallengeType ChallengeTargetType; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::UInt32 ChallengeTargetParam1; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID ChallengeTargetName; // 0x28
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
