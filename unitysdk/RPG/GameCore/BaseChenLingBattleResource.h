#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleResource; }

#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43AFF0)
#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43AF30)
#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43AD40)

namespace RPG::GameCore
{
	class BaseChenLingBattleResource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsConsume; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
