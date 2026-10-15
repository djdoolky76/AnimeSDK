#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DamageStance; }
namespace RPG::GameCore { class TaskContext; }

#define PMPLHCFJCMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3231A0)
#define PMPLHCFJCMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3231B0)
#define PMPLHCFJCMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3231F0)
#define PMPLHCFJCMB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC323BF0)
#define PMPLHCFJCMB_TICK_OFFSET UNITYSDK_OFFSET(0xC323C40)

inline static constexpr unsigned int PMPLHCFJCMB_TypeDefinitionIndex = 54989;

	class PMPLHCFJCMB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DamageStance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageStance*))((::PBYTE)hIl2Cpp + PMPLHCFJCMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPLHCFJCMB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPLHCFJCMB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPLHCFJCMB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMPLHCFJCMB_TICK_OFFSET))(this, a1);
		}

	};
