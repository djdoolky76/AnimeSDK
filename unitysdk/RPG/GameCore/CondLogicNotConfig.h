#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CondLogicNotConfig; }
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_CONDLOGICNOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D37B0)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D37C0)
#define RPG_GAMECORE_CONDLOGICNOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D3760)

namespace RPG::GameCore
{
	class CondLogicNotConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondLogicNotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondLogicNotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondLogicNotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondLogicNotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICNOTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
