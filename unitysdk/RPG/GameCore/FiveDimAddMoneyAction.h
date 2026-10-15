#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAddMoneyAction; }

#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D680C30)
#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D680C40)
#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D680B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddMoneyAction_TypeDefinitionIndex = 18724;

	class FiveDimAddMoneyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AddNum; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
