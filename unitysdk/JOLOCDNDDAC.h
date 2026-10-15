#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwordTrainingNotifySelectStory; }
namespace RPG::GameCore { class TaskContext; }

#define JOLOCDNDDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A78B0)
#define JOLOCDNDDAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A78C0)
#define JOLOCDNDDAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2A7900)
#define JOLOCDNDDAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2A7980)
#define JOLOCDNDDAC_TICK_OFFSET UNITYSDK_OFFSET(0xB2A79D0)

inline static constexpr unsigned int JOLOCDNDDAC_TypeDefinitionIndex = 58757;

	class JOLOCDNDDAC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwordTrainingNotifySelectStory* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingNotifySelectStory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingNotifySelectStory*))((::PBYTE)hIl2Cpp + JOLOCDNDDAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOCDNDDAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOCDNDDAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLOCDNDDAC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOLOCDNDDAC_TICK_OFFSET))(this, a1);
		}

	};
