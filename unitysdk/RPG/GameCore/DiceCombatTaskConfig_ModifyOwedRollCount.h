#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/StackAdditivePropertyOp.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyOwedRollCount; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612C40)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612C50)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612BF0)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_ModifyOwedRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::StackAdditivePropertyOp OP; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
