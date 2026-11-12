#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleTargetDialogOffset; }

#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA9EA0)
#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA9EB0)
#define RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA9E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleTargetDialogOffset_TypeDefinitionIndex = 23688;

	class SetBattleTargetDialogOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::MVector2 Offset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleTargetDialogOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleTargetDialogOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleTargetDialogOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleTargetDialogOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETDIALOGOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
