#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetPrayQuestFinishShowTypeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707DB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707DC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetPrayQuestFinishShowTypeConfig_TypeDefinitionIndex = 19500;

	class GridFightModifierSetPrayQuestFinishShowTypeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPrayQuestFinishShowTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPRAYQUESTFINISHSHOWTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
