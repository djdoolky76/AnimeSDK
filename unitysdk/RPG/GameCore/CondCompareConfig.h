#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CondCompareConfig; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDCOMPARECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A58B0)
#define RPG_GAMECORE_CONDCOMPARECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A58C0)
#define RPG_GAMECORE_CONDCOMPARECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondCompareConfig_TypeDefinitionIndex = 17076;

	class CondCompareConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MiParameterConfigBase* LeftValue; // 0x20
		::RPG::GameCore::MiParameterConfigBase* RightValue; // 0x28
		::System::Single Epsilon; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondCompareConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CondCompareConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CondCompareConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDCOMPARECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
