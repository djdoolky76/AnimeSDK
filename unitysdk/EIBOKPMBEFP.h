#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropLoadFastDeliverPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define EIBOKPMBEFP_CTOR_OFFSET UNITYSDK_OFFSET(0x154B0210)
#define EIBOKPMBEFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154B0B10)
#define EIBOKPMBEFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154B0220)
#define EIBOKPMBEFP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154B0AC0)
#define EIBOKPMBEFP_TICK_OFFSET UNITYSDK_OFFSET(0x154B0B70)

inline static constexpr unsigned int EIBOKPMBEFP_TypeDefinitionIndex = 58331;

	class EIBOKPMBEFP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropLoadFastDeliverPuzzle* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + EIBOKPMBEFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBOKPMBEFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBOKPMBEFP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBOKPMBEFP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIBOKPMBEFP_TICK_OFFSET))(this, a1);
		}

	};
