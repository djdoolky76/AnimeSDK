#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MemoryVisionPuzzleInit; }
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D872240)
#define RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D872250)
#define RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D872200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MemoryVisionPuzzleInit_TypeDefinitionIndex = 21069;

	class MemoryVisionPuzzleInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetEntityID; // 0x18
		::System::UInt32 SubmissionID; // 0x1C
		::System::UInt32 MissionCustomValueIndex; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MemoryVisionPuzzleInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MemoryVisionPuzzleInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MemoryVisionPuzzleInit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MemoryVisionPuzzleInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMORYVISIONPUZZLEINIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
