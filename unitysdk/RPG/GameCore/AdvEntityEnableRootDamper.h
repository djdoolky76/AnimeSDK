#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityEnableRootDamper; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39D3E0)
#define RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39D420)
#define RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityEnableRootDamper_TypeDefinitionIndex = 21052;

	class AdvEntityEnableRootDamper : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityEnableRootDamper* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityEnableRootDamper*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityEnableRootDamper* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityEnableRootDamper*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYENABLEROOTDAMPER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
