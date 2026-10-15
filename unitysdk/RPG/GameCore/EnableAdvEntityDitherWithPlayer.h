#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableAdvEntityDitherWithPlayer; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6101C0)
#define RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6101D0)
#define RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D610190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableAdvEntityDitherWithPlayer_TypeDefinitionIndex = 20569;

	class EnableAdvEntityDitherWithPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableAdvEntityDitherWithPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEADVENTITYDITHERWITHPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
