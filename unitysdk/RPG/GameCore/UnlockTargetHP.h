#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UnlockTargetHP; }
namespace System { class String; }

#define RPG_GAMECORE_UNLOCKTARGETHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC78590)
#define RPG_GAMECORE_UNLOCKTARGETHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC785A0)
#define RPG_GAMECORE_UNLOCKTARGETHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC78560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockTargetHP_TypeDefinitionIndex = 23620;

	class UnlockTargetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LockKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockTargetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockTargetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockTargetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockTargetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
