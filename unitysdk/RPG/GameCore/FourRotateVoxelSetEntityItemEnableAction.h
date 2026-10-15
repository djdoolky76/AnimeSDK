#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelSceneItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelSetEntityItemEnableAction; }

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4720)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C4730)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C46E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityItemEnableAction_TypeDefinitionIndex = 16774;

	class FourRotateVoxelSetEntityItemEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FourRotateVoxelSceneItemType ItemType; // 0x10
		::System::Boolean IsEnable; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityItemEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYITEMENABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
