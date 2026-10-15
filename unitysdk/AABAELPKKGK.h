#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HPBAKOEHBHJ;
namespace RPG::GameCore { class ProcessStoredDamage; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define AABAELPKKGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0BEC00)
#define AABAELPKKGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0BEC10)
#define AABAELPKKGK_FENDMHJDPJD_OFFSET UNITYSDK_OFFSET(0xB0BF3E0)
#define AABAELPKKGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0BEC50)
#define AABAELPKKGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0BF5E0)
#define AABAELPKKGK_TICK_OFFSET UNITYSDK_OFFSET(0xB0BF630)

inline static constexpr unsigned int AABAELPKKGK_TypeDefinitionIndex = 55269;

	class AABAELPKKGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ProcessStoredDamage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ProcessStoredDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ProcessStoredDamage*))((::PBYTE)hIl2Cpp + AABAELPKKGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABAELPKKGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABAELPKKGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean FENDMHJDPJD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::HPBAKOEHBHJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::HPBAKOEHBHJ*))((::PBYTE)hIl2Cpp + AABAELPKKGK_FENDMHJDPJD_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABAELPKKGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AABAELPKKGK_TICK_OFFSET))(this, a1);
		}

	};
