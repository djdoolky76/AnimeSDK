#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetViewModeServantFollow; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9C460)
#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9C470)
#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9C430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetViewModeServantFollow_TypeDefinitionIndex = 22916;

	class SetViewModeServantFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetViewModeServantFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetViewModeServantFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetViewModeServantFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetViewModeServantFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
