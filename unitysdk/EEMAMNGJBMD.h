#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowMazePuzzleChallengeFinishToast; }
namespace RPG::GameCore { class TaskContext; }

#define EEMAMNGJBMD_CTOR_OFFSET UNITYSDK_OFFSET(0x13A369B0)
#define EEMAMNGJBMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A36B10)
#define EEMAMNGJBMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A369C0)
#define EEMAMNGJBMD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A36A70)
#define EEMAMNGJBMD_TICK_OFFSET UNITYSDK_OFFSET(0x13A36AB0)

inline static constexpr unsigned int EEMAMNGJBMD_TypeDefinitionIndex = 53276;

	class EEMAMNGJBMD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazePuzzleChallengeFinishToast*))((::PBYTE)hIl2Cpp + EEMAMNGJBMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMAMNGJBMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMAMNGJBMD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEMAMNGJBMD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMAMNGJBMD_DISPOSE_OFFSET))(this);
		}

	};
