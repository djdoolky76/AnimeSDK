#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FinishMazePuzzleChallenge; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define KKOFGNGDDCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1735CA30)
#define KKOFGNGDDCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1735CA40)
#define KKOFGNGDDCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1735CA80)
#define KKOFGNGDDCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1735CBF0)
#define KKOFGNGDDCP_TICK_OFFSET UNITYSDK_OFFSET(0x1735CC40)

inline static constexpr unsigned int KKOFGNGDDCP_TypeDefinitionIndex = 53960;

	class KKOFGNGDDCP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropComponent* GBLNDEKFNNJ; // 0x20
		::RPG::GameCore::FinishMazePuzzleChallenge* OFKGLJOAMLD; // 0x28
		::System::UInt32 DNCPEJNPCBC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + KKOFGNGDDCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOFGNGDDCP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOFGNGDDCP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOFGNGDDCP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKOFGNGDDCP_TICK_OFFSET))(this, a1);
		}

	};
