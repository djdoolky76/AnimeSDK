#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetEntityTalkEnable; }
namespace RPG::GameCore { class TaskContext; }

#define ECOOHPHFFFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E13A0)
#define ECOOHPHFFFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3E13B0)
#define ECOOHPHFFFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C3E13F0)
#define ECOOHPHFFFL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C3E1550)
#define ECOOHPHFFFL_TICK_OFFSET UNITYSDK_OFFSET(0x1C3E15A0)

inline static constexpr unsigned int ECOOHPHFFFL_TypeDefinitionIndex = 54390;

	class ECOOHPHFFFL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetEntityTalkEnable* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityTalkEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityTalkEnable*))((::PBYTE)hIl2Cpp + ECOOHPHFFFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOOHPHFFFL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOOHPHFFFL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOOHPHFFFL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECOOHPHFFFL_TICK_OFFSET))(this, a1);
		}

	};
