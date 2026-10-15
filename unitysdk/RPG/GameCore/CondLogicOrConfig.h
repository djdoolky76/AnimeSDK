#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CondLogicOrConfig; }
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_CONDLOGICORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3960)
#define RPG_GAMECORE_CONDLOGICORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D3970)
#define RPG_GAMECORE_CONDLOGICORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D3910)

namespace RPG::GameCore
{
	class CondLogicOrConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondLogicOrConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondLogicOrConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondLogicOrConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondLogicOrConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
