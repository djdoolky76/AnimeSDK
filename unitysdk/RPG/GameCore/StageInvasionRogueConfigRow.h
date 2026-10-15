#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionRogueConfigRow; }

#define RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0F920)
#define RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0F800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionRogueConfigRow_TypeDefinitionIndex = 15163;

	class StageInvasionRogueConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 InvasionID; // 0x10
		::System::UInt32 ChallengeID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageInvasionRogueConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageInvasionRogueConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
