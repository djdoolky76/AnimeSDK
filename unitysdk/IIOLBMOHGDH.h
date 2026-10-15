#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SelectAISkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIOLBMOHGDH_CTOR_OFFSET UNITYSDK_OFFSET(0x16454C80)
#define IIOLBMOHGDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16454C90)
#define IIOLBMOHGDH_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0x164552A0)
#define IIOLBMOHGDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16454CD0)
#define IIOLBMOHGDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16455350)
#define IIOLBMOHGDH_TICK_OFFSET UNITYSDK_OFFSET(0x164553A0)

inline static constexpr unsigned int IIOLBMOHGDH_TypeDefinitionIndex = 54393;

	class IIOLBMOHGDH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::SelectAISkillTarget* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectAISkillTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectAISkillTarget*))((::PBYTE)hIl2Cpp + IIOLBMOHGDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOLBMOHGDH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOLBMOHGDH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOLBMOHGDH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIOLBMOHGDH_TICK_OFFSET))(this, a1);
		}

		::System::Void FEOIFJONLCH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AISelector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + IIOLBMOHGDH_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
