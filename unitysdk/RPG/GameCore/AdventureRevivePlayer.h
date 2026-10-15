#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureRevivePlayer; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREREVIVEPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CCCE0)
#define RPG_GAMECORE_ADVENTUREREVIVEPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CCCF0)
#define RPG_GAMECORE_ADVENTUREREVIVEPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CCCB0)

namespace RPG::GameCore
{
	class AdventureRevivePlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RevivedHPRatio; // 0x18
		::RPG::GameCore::DynamicFloat* RevivedSPRatio; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifyTargetType; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* TargetType; // 0x30
		::System::Boolean ClientUseGMCommand; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREVIVEPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureRevivePlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureRevivePlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREVIVEPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureRevivePlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureRevivePlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREVIVEPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
