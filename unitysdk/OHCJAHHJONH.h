#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PrepareFinishMazePuzzleChallenge; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define OHCJAHHJONH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE57F90)
#define OHCJAHHJONH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE57FA0)
#define OHCJAHHJONH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE57FE0)
#define OHCJAHHJONH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE58150)
#define OHCJAHHJONH_TICK_OFFSET UNITYSDK_OFFSET(0xBE581A0)

inline static constexpr unsigned int OHCJAHHJONH_TypeDefinitionIndex = 53171;

	class OHCJAHHJONH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PrepareFinishMazePuzzleChallenge* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::PropComponent* GBLNDEKFNNJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 DNCPEJNPCBC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + OHCJAHHJONH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCJAHHJONH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCJAHHJONH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCJAHHJONH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHCJAHHJONH_TICK_OFFSET))(this, a1);
		}

	};
