#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CancelMazePuzzleChallenge; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define BPEDAJKGNNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B600980)
#define BPEDAJKGNNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B600990)
#define BPEDAJKGNNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B6009D0)
#define BPEDAJKGNNK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B600BB0)
#define BPEDAJKGNNK_TICK_OFFSET UNITYSDK_OFFSET(0x1B600C00)

inline static constexpr unsigned int BPEDAJKGNNK_TypeDefinitionIndex = 53738;

	class BPEDAJKGNNK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CancelMazePuzzleChallenge* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::PropComponent* GBLNDEKFNNJ; // 0x28
		::System::UInt32 DNCPEJNPCBC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CancelMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CancelMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + BPEDAJKGNNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEDAJKGNNK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEDAJKGNNK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEDAJKGNNK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPEDAJKGNNK_TICK_OFFSET))(this, a1);
		}

	};
