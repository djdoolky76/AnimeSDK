#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowExpandElationItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWEXPANDELATIONITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADC230)
#define RPG_GAMECORE_SHOWEXPANDELATIONITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADC240)
#define RPG_GAMECORE_SHOWEXPANDELATIONITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADC200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowExpandElationItem_TypeDefinitionIndex = 23366;

	class ShowExpandElationItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEXPANDELATIONITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowExpandElationItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowExpandElationItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEXPANDELATIONITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowExpandElationItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowExpandElationItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEXPANDELATIONITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
