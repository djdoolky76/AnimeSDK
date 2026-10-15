#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattlePredicate; }

#define RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D2C0)
#define RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40D260)
#define RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40CFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattlePredicate_TypeDefinitionIndex = 15810;

	class BaseChenLingBattlePredicate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattlePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattlePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
