#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckTeamEntityNumberAxis; }

#define RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57D010)
#define RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57D020)
#define RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57CFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckTeamEntityNumberAxis_TypeDefinitionIndex = 15509;

	class CheckTeamEntityNumberAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::TeamType TargetType; // 0x10
		::System::Int32 TargetCharacterID; // 0x14
		::RPG::GameCore::CompareType EquationType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint TargetNumber; // 0x20
		::RPG::GameCore::FixPoint CheckScore; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckTeamEntityNumberAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckTeamEntityNumberAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckTeamEntityNumberAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckTeamEntityNumberAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
