#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StretchGlobalTimeSlowByKey; }
namespace RPG::GameCore { class TaskContext; }

#define HFFALEICMNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C69E70)
#define HFFALEICMNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C69E80)
#define HFFALEICMNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C69EC0)
#define HFFALEICMNG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C69FE0)
#define HFFALEICMNG_TICK_OFFSET UNITYSDK_OFFSET(0x15C6A030)

inline static constexpr unsigned int HFFALEICMNG_TypeDefinitionIndex = 55669;

	class HFFALEICMNG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StretchGlobalTimeSlowByKey* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StretchGlobalTimeSlowByKey* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StretchGlobalTimeSlowByKey*))((::PBYTE)hIl2Cpp + HFFALEICMNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFALEICMNG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFALEICMNG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFALEICMNG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFFALEICMNG_TICK_OFFSET))(this, a1);
		}

	};
