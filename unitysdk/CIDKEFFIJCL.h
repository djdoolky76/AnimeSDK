#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class InitShield; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CIDKEFFIJCL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF661A0)
#define CIDKEFFIJCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF661B0)
#define CIDKEFFIJCL_IEPNBDPKJHJ_OFFSET UNITYSDK_OFFSET(0xCF66AF0)
#define CIDKEFFIJCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF661F0)
#define CIDKEFFIJCL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF66DB0)
#define CIDKEFFIJCL_TICK_OFFSET UNITYSDK_OFFSET(0xCF66E00)

	class CIDKEFFIJCL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::InitShield* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitShield*))((::PBYTE)hIl2Cpp + CIDKEFFIJCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKEFFIJCL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKEFFIJCL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKEFFIJCL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIDKEFFIJCL_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint IEPNBDPKJHJ(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CIDKEFFIJCL_IEPNBDPKJHJ_OFFSET))(this, a1, a2);
		}

	};
