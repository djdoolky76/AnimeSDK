#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define MOCDDJFBHNF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E39E0)
#define MOCDDJFBHNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2E3A10)

inline static constexpr unsigned int MOCDDJFBHNF_TypeDefinitionIndex = 56877;

	class MOCDDJFBHNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + MOCDDJFBHNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCDDJFBHNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
