#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowPuzzleHudWolfBroInBox; }
namespace RPG::GameCore { class TaskContext; }

#define EHFBINGKHFL_CTOR_OFFSET UNITYSDK_OFFSET(0x154986C0)
#define EHFBINGKHFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154986D0)
#define EHFBINGKHFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15498710)
#define EHFBINGKHFL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15498790)
#define EHFBINGKHFL_TICK_OFFSET UNITYSDK_OFFSET(0x154987E0)

inline static constexpr unsigned int EHFBINGKHFL_TypeDefinitionIndex = 58679;

	class EHFBINGKHFL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowPuzzleHudWolfBroInBox* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*))((::PBYTE)hIl2Cpp + EHFBINGKHFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFBINGKHFL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFBINGKHFL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFBINGKHFL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHFBINGKHFL_TICK_OFFSET))(this, a1);
		}

	};
