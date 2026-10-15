#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelSetEntityTriggerEnableAction; }

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F23A0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F23B0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F22D0)

namespace RPG::GameCore
{
	class FourRotateVoxelSetEntityTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYTRIGGERENABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
