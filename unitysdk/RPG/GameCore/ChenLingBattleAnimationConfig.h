#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAnimationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5821C0)
#define RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5820E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAnimationConfig_TypeDefinitionIndex = 15693;

	class ChenLingBattleAnimationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* TriggerToAnimationLength; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAnimationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAnimationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
