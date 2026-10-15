#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/MatchThree1v1AIScoreApsect.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F500)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84F380)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIScoreAspectConfig_TypeDefinitionIndex = 24949;

	class MatchThree1v1AIScoreAspectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect Aspect; // 0x10
		::System::UInt32 Priority; // 0x14
		::System::Single Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
