#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyTryTriggerTeleport; }

#define DGGLIGJFPOK_CTOR_OFFSET UNITYSDK_OFFSET(0xF41B5F0)
#define DGGLIGJFPOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF41BD20)
#define DGGLIGJFPOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF41B600)
#define DGGLIGJFPOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF41BC90)
#define DGGLIGJFPOK_PDDNICKHBNA_OFFSET UNITYSDK_OFFSET(0xF41B930)
#define DGGLIGJFPOK_TICK_OFFSET UNITYSDK_OFFSET(0xF41B650)

inline static constexpr unsigned int DGGLIGJFPOK_TypeDefinitionIndex = 60103;

	class DGGLIGJFPOK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UIMonopolyTryTriggerTeleport* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UIMonopolyTryTriggerTeleport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UIMonopolyTryTriggerTeleport*))((::PBYTE)hIl2Cpp + DGGLIGJFPOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLIGJFPOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGGLIGJFPOK_TICK_OFFSET))(this, a1);
		}

		::System::Void PDDNICKHBNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLIGJFPOK_PDDNICKHBNA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLIGJFPOK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGLIGJFPOK_DISPOSE_OFFSET))(this);
		}

	};
