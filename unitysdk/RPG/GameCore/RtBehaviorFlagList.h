#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBehaviorFlagList; }

#define RPG_GAMECORE_RTBEHAVIORFLAGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA22E20)
#define RPG_GAMECORE_RTBEHAVIORFLAGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA22D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagList_TypeDefinitionIndex = 17645;

	class RtBehaviorFlagList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* BehaviorFlags; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBehaviorFlagList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBehaviorFlagList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
