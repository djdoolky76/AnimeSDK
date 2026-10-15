#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimFireEffectAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelFireEffectAction; }

#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EE250)
#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EE260)
#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EE220)

namespace RPG::GameCore
{
	class FourRotateVoxelFireEffectAction : public ::RPG::GameCore::FiveDimFireEffectAction
	{
	public:
		::System::Boolean IsAlwaysFaceToScreen; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelFireEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelFireEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
