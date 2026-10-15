#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WolfBroInterruptAllProjectiles; }

#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA8590)
#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA8600)
#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA8500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroInterruptAllProjectiles_TypeDefinitionIndex = 21590;

	class WolfBroInterruptAllProjectiles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
