#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BeginUseSharedSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define MGHFOJBPGAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB91DDD0)
#define MGHFOJBPGAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB91DDE0)
#define MGHFOJBPGAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB91DE20)
#define MGHFOJBPGAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB91E090)
#define MGHFOJBPGAA_TICK_OFFSET UNITYSDK_OFFSET(0xB91E0E0)

inline static constexpr unsigned int MGHFOJBPGAA_TypeDefinitionIndex = 57958;

	class MGHFOJBPGAA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BeginUseSharedSummonUnit* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BeginUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BeginUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + MGHFOJBPGAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHFOJBPGAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHFOJBPGAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHFOJBPGAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGHFOJBPGAA_TICK_OFFSET))(this, a1);
		}

	};
