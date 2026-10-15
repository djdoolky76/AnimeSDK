#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetStanceCount; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSTANCECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC2C70)
#define RPG_GAMECORE_SETSTANCECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC2C80)
#define RPG_GAMECORE_SETSTANCECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStanceCount_TypeDefinitionIndex = 22685;

	class SetStanceCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* AddCustomValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStanceCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStanceCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
