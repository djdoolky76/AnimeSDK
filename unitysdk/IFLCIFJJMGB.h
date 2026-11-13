#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopSummonUnitGameplay; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class TaskContext; }

#define IFLCIFJJMGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1B9D0)
#define IFLCIFJJMGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC1BAC0)
#define IFLCIFJJMGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BC1BBF0)
#define IFLCIFJJMGB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BC1BB40)
#define IFLCIFJJMGB_TICK_OFFSET UNITYSDK_OFFSET(0x1BC1BB90)

inline static constexpr unsigned int IFLCIFJJMGB_TypeDefinitionIndex = 60005;

	class IFLCIFJJMGB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StopSummonUnitGameplay* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::SummonUnitGameplayConfig* IOFNMCBADNM; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSummonUnitGameplay*))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_ONTASKRESET_OFFSET))(this);
		}

	};
