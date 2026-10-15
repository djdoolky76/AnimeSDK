#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECPOOCKEJMK.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TriggerValidGuestConfigType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace RPG::GameCore { class TriggerValidGuestSingleTargetConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32670)
#define RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerValidGuestConfig_TypeDefinitionIndex = 23893;

	class TriggerValidGuestConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TriggerValidGuestConfigType ConfigType; // 0x10
		::System::Boolean Npc; // 0x14
		::System::Boolean NpcMonster; // 0x15
		::System::Boolean LocalPlayer; // 0x16
		::System::Boolean Teammember; // 0x17
		::System::Boolean FakePlayer; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TriggerValidGuestSingleTargetConfig*>* TargetList; // 0x20
		::System::Collections::Generic::List_1<::ECPOOCKEJMK>* EvaluatedInstances; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerValidGuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerValidGuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
