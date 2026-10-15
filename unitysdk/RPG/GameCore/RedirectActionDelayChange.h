#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RedirectActionDelayChange; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D975970)
#define RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D975980)
#define RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D975940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedirectActionDelayChange_TypeDefinitionIndex = 23273;

	class RedirectActionDelayChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FromTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* ToTargetType; // 0x20
		::System::Boolean IsCancel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedirectActionDelayChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedirectActionDelayChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedirectActionDelayChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedirectActionDelayChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
