#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CondLogicAndConfig; }
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_CONDLOGICANDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5B60)
#define RPG_GAMECORE_CONDLOGICANDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A5B70)
#define RPG_GAMECORE_CONDLOGICANDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicAndConfig_TypeDefinitionIndex = 17073;

	class CondLogicAndConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondLogicAndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondLogicAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondLogicAndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondLogicAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
