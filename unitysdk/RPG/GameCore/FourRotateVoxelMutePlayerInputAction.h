#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelMutePlayerInputAction; }

#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B6BB0)
#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F7B6BC0)
#define RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7B6AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMutePlayerInputAction_TypeDefinitionIndex = 16933;

	class FourRotateVoxelMutePlayerInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMUTEPLAYERINPUTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
