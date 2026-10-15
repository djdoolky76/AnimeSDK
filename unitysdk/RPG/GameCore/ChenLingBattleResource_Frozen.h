#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleResource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleResource_Frozen; }

#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5878C0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5878D0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleResource_Frozen_TypeDefinitionIndex = 15781;

	class ChenLingBattleResource_Frozen : public ::RPG::GameCore::BaseChenLingBattleResource
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Effects; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleResource_Frozen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleResource_Frozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleResource_Frozen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleResource_Frozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
