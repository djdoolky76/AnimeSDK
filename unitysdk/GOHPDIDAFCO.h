#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::GameCore { class CakeRaceWaitDragPropByCatRank; }
namespace RPG::GameCore { class TaskContext; }

#define GOHPDIDAFCO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B27600)
#define GOHPDIDAFCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B27610)
#define GOHPDIDAFCO_MDFPDKPIEEK_OFFSET UNITYSDK_OFFSET(0x15B27A90)
#define GOHPDIDAFCO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B277F0)
#define GOHPDIDAFCO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B27C30)
#define GOHPDIDAFCO_TICK_OFFSET UNITYSDK_OFFSET(0x15B27C80)
#define GOHPDIDAFCO__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x15B27CE0)

inline static constexpr unsigned int GOHPDIDAFCO_TypeDefinitionIndex = 52625;

	class GOHPDIDAFCO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CakeRaceWaitDragPropByCatRank* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitDragPropByCatRank*))((::PBYTE)hIl2Cpp + GOHPDIDAFCO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPDIDAFCO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPDIDAFCO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPDIDAFCO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOHPDIDAFCO_TICK_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> MDFPDKPIEEK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOHPDIDAFCO_MDFPDKPIEEK_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTaskBegin_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPDIDAFCO__ONTASKBEGIN_B__4_0_OFFSET))(this);
		}

	};
