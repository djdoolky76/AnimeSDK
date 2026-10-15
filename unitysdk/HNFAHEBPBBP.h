#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class SO_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define HNFAHEBPBBP_CTOR_OFFSET UNITYSDK_OFFSET(0x15D920F0)
#define HNFAHEBPBBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D92160)
#define HNFAHEBPBBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D921B0)
#define HNFAHEBPBBP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D924F0)
#define HNFAHEBPBBP_TICK_OFFSET UNITYSDK_OFFSET(0x15D92540)

inline static constexpr unsigned int HNFAHEBPBBP_TypeDefinitionIndex = 52121;

	class HNFAHEBPBBP
	{
	public:
		::RPG::GameCore::FreeStyleComponent* ECLBHCIOKHB; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayFreeStyle*))((::PBYTE)hIl2Cpp + HNFAHEBPBBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFAHEBPBBP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFAHEBPBBP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFAHEBPBBP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNFAHEBPBBP_TICK_OFFSET))(this, a1);
		}

	};
