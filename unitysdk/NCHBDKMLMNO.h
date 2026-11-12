#pragma once
#include "unitysdk/unitysdk.h"
class ENGBNDIPDJL;
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define NCHBDKMLMNO_CTOR_OFFSET UNITYSDK_OFFSET(0xC397CF0)
#define NCHBDKMLMNO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC397E30)
#define NCHBDKMLMNO_NMNBPCGANNE_OFFSET UNITYSDK_OFFSET(0xC397D80)

inline static constexpr unsigned int NCHBDKMLMNO_TypeDefinitionIndex = 55750;

	class NCHBDKMLMNO
	{
	public:
		::RPG::GameCore::GameEntity* GKKPKKPFBCE; // 0x28
		::System::Action_1<::ENGBNDIPDJL*>* AEOGOHOOAHI; // 0x30
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
