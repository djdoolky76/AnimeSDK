#pragma once
#include "unitysdk/unitysdk.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define NCHBDKMLMNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB10BF0)
#define NCHBDKMLMNO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB10D30)
#define NCHBDKMLMNO_NMNBPCGANNE_OFFSET UNITYSDK_OFFSET(0xBB10C80)

	class NCHBDKMLMNO
	{
	public:
		::System::Action* AEOGOHOOAHI; // 0x28
		::RPG::GameCore::GameEntity* GKKPKKPFBCE; // 0x30
		::System::Int32 COEMCOBPMKD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + NCHBDKMLMNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NMNBPCGANNE(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + NCHBDKMLMNO_NMNBPCGANNE_OFFSET))(this, a1);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHBDKMLMNO_EVALUATE_OFFSET))(this);
		}

	};
