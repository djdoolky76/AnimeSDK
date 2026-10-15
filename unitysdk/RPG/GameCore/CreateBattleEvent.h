#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateBattleEvent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATEBATTLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E13B0)
#define RPG_GAMECORE_CREATEBATTLEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E13C0)
#define RPG_GAMECORE_CREATEBATTLEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E11E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEvent_TypeDefinitionIndex = 22975;

	class CreateBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::RPG::GameCore::TargetEvaluator* PropertyFromTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifyCaster; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::RPG::GameCore::TeamType Team; // 0x38
		::RPG::GameCore::TeamType TotalDamageTeam; // 0x3C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeCreateCallback; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattleEventCreate; // 0x48
		::System::Boolean IsDynamicPreload; // 0x50
		::System::Boolean AllowDuplicate; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
