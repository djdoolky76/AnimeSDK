#pragma once
#include "unitysdk/unitysdk.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define NCHBDKMLMNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0AB10)
#define NCHBDKMLMNO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB0AC60)
#define NCHBDKMLMNO_NMNBPCGANNE_OFFSET UNITYSDK_OFFSET(0xBB0ABA0)

inline static constexpr unsigned int NCHBDKMLMNO_TypeDefinitionIndex = 54585;

	class NCHBDKMLMNO
	{
	public:
		::System::Action_1<::ENGBNDIPDJL*>* AEOGOHOOAHI; // 0x28
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
