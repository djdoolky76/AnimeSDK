#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBehaviorFlagListPair; }

#define RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA507F0)
#define RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA506D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagListPair_TypeDefinitionIndex = 17646;

	class RtBehaviorFlagListPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtBehaviorFlag Key; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* BehaviorFlags; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBehaviorFlagListPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBehaviorFlagListPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGLISTPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
