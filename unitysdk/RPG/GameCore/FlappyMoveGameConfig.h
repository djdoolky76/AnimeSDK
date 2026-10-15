#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFlappyPipeBlockConfig; }
namespace RPG::GameCore { class FlappyMoveGameConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3670)
#define RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E3680)
#define RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E3640)

namespace RPG::GameCore
{
	class FlappyMoveGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::Single InitialHorizoneSpeed; // 0x10
		::System::Single MaxHorizoneSpeed; // 0x14
		::System::Single Gravity; // 0x18
		::System::Single Accelerate; // 0x1C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimFlappyPipeBlockConfig*>* PipeBlockConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlappyMoveGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlappyMoveGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlappyMoveGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlappyMoveGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYMOVEGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
