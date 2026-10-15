#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTrackNpcPlayerHide; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B35C0)
#define RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B35D0)
#define RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B3590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcPlayerHide_TypeDefinitionIndex = 22190;

	class AdvTrackNpcPlayerHide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* RelateProp; // 0x18
		::System::Boolean Hide; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcPlayerHide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcPlayerHide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCPLAYERHIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
