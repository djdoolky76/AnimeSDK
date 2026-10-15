#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableBillboard; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEBILLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63E3C0)
#define RPG_GAMECORE_ENABLEBILLBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63E3F0)
#define RPG_GAMECORE_ENABLEBILLBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63E370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableBillboard_TypeDefinitionIndex = 20462;

	class EnableBillboard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBILLBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableBillboard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBILLBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableBillboard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEBILLBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
