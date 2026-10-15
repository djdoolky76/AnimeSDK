#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvOnTargetLost; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVONTARGETLOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37BBE0)
#define RPG_GAMECORE_ADVONTARGETLOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37BBF0)
#define RPG_GAMECORE_ADVONTARGETLOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37BBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOnTargetLost_TypeDefinitionIndex = 20346;

	class AdvOnTargetLost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONTARGETLOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvOnTargetLost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvOnTargetLost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONTARGETLOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvOnTargetLost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvOnTargetLost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONTARGETLOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
