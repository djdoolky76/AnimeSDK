#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FlappyPipeRebuildAnchor; }

#define RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3960)
#define RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E3970)
#define RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E3890)

namespace RPG::GameCore
{
	class FlappyPipeRebuildAnchor : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRebuildAnchor; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlappyPipeRebuildAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlappyPipeRebuildAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlappyPipeRebuildAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlappyPipeRebuildAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYPIPEREBUILDANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
