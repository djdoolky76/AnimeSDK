#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OverrideWaveMonsterPerform; }
namespace RPG::GameCore { class TaskContext; }

#define KFOPEHFIFHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1770B870)
#define KFOPEHFIFHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1770B880)
#define KFOPEHFIFHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1770B8C0)
#define KFOPEHFIFHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1770BA60)
#define KFOPEHFIFHC_TICK_OFFSET UNITYSDK_OFFSET(0x1770BAB0)

inline static constexpr unsigned int KFOPEHFIFHC_TypeDefinitionIndex = 59502;

	class KFOPEHFIFHC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OverrideWaveMonsterPerform* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideWaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideWaveMonsterPerform*))((::PBYTE)hIl2Cpp + KFOPEHFIFHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOPEHFIFHC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOPEHFIFHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOPEHFIFHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFOPEHFIFHC_TICK_OFFSET))(this, a1);
		}

	};
