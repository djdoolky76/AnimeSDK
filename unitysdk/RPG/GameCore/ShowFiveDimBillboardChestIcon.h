#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowFiveDimBillboardChestIcon; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF240)
#define RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAF250)
#define RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAF200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFiveDimBillboardChestIcon_TypeDefinitionIndex = 21294;

	class ShowFiveDimBillboardChestIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFiveDimBillboardChestIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFiveDimBillboardChestIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFIVEDIMBILLBOARDCHESTICON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
