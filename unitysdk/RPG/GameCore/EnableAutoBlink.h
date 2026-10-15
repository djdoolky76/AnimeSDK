#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableAutoBlink; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEAUTOBLINK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6105A0)
#define RPG_GAMECORE_ENABLEAUTOBLINK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6105B0)
#define RPG_GAMECORE_ENABLEAUTOBLINK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D610570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableAutoBlink_TypeDefinitionIndex = 22411;

	class EnableAutoBlink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEAUTOBLINK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableAutoBlink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableAutoBlink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEAUTOBLINK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableAutoBlink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableAutoBlink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEAUTOBLINK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
