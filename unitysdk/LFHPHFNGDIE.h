#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"
namespace RPG::GameCore { class SetBattleScoringItem; }
namespace RPG::GameCore { class TaskContext; }

#define LFHPHFNGDIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB66DFD0)
#define LFHPHFNGDIE_ENGBJMFLNIL_OFFSET UNITYSDK_OFFSET(0xB66E080)
#define LFHPHFNGDIE_FCBBDHKOGGD_OFFSET UNITYSDK_OFFSET(0xB66E650)
#define LFHPHFNGDIE_HOMCMIGLKCN_OFFSET UNITYSDK_OFFSET(0xB66E760)
#define LFHPHFNGDIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB66E000)

inline static constexpr unsigned int LFHPHFNGDIE_TypeDefinitionIndex = 58525;

	class LFHPHFNGDIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleScoringItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleScoringItem*))((::PBYTE)hIl2Cpp + LFHPHFNGDIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHPHFNGDIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ENGBJMFLNIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHPHFNGDIE_ENGBJMFLNIL_OFFSET))(this);
		}

		::RPG::GameCore::LevelDataComponent_BattleScoringData FCBBDHKOGGD(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelDataComponent_BattleScoringData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFHPHFNGDIE_FCBBDHKOGGD_OFFSET))(this, a1);
		}

		::System::Void HOMCMIGLKCN(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LFHPHFNGDIE_HOMCMIGLKCN_OFFSET))(this, a1, a2);
		}

	};
