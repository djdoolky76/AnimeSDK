#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropParameter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPropMapHeliobusChallengeParam; }

#define RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79D6F0)
#define RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D79D700)
#define RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropMapHeliobusChallengeParam_TypeDefinitionIndex = 17256;

	class LevelPropMapHeliobusChallengeParam : public ::RPG::GameCore::LevelPropParameter
	{
	public:
		::System::UInt32 ChallengeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
