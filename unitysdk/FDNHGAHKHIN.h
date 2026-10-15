#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GravityBallPuzzleSwitchBoardWaitFinish; }
namespace RPG::GameCore { class TaskContext; }

#define FDNHGAHKHIN_CTOR_OFFSET UNITYSDK_OFFSET(0x156D36B0)
#define FDNHGAHKHIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D36C0)
#define FDNHGAHKHIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156D3700)
#define FDNHGAHKHIN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156D38B0)
#define FDNHGAHKHIN_TICK_OFFSET UNITYSDK_OFFSET(0x156D38F0)
#define FDNHGAHKHIN__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x156D3950)

inline static constexpr unsigned int FDNHGAHKHIN_TypeDefinitionIndex = 52916;

	class FDNHGAHKHIN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*))((::PBYTE)hIl2Cpp + FDNHGAHKHIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNHGAHKHIN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNHGAHKHIN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNHGAHKHIN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDNHGAHKHIN_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNHGAHKHIN__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
