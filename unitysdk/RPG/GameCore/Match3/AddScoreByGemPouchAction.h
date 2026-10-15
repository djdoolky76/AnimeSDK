#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class AddScoreByGemPouchAction; }

#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D849F40)
#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D849F50)
#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D849EF0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AddScoreByGemPouchAction_TypeDefinitionIndex = 24901;

	class AddScoreByGemPouchAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 ScaleFactor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AddScoreByGemPouchAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AddScoreByGemPouchAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
