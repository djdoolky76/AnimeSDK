#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamBoostCheck; }

#define DKODGNPOGNC_CTOR_OFFSET UNITYSDK_OFFSET(0xF886A80)
#define DKODGNPOGNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF886A90)
#define DKODGNPOGNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF886AD0)
#define DKODGNPOGNC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF886B20)
#define DKODGNPOGNC_TICK_OFFSET UNITYSDK_OFFSET(0xF886B70)

inline static constexpr unsigned int DKODGNPOGNC_TypeDefinitionIndex = 58764;

	class DKODGNPOGNC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TeamBoostCheck* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamBoostCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamBoostCheck*))((::PBYTE)hIl2Cpp + DKODGNPOGNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKODGNPOGNC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKODGNPOGNC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKODGNPOGNC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKODGNPOGNC_TICK_OFFSET))(this, a1);
		}

	};
