#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaitInteractionTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitInteraction; }
namespace System { class String; }

#define RPG_GAMECORE_WAITINTERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEAD1C0)
#define RPG_GAMECORE_WAITINTERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEAD1D0)
#define RPG_GAMECORE_WAITINTERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEAD180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitInteraction_TypeDefinitionIndex = 20533;

	class WaitInteraction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WaitInteractionTypeMask InteractionMask; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PredicateConfig* InteractionSourceFilter; // 0x20
		::Il2CppArray<::System::String*>* WaitAnimList; // 0x28
		::RPG::GameCore::DynamicFloat* MaxWaitTime; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInteraction; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeout; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINTERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitInteraction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitInteraction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINTERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitInteraction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitInteraction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITINTERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
