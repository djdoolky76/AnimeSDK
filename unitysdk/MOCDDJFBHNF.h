#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define MOCDDJFBHNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA25120)
#define MOCDDJFBHNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA25150)

inline static constexpr unsigned int MOCDDJFBHNF_TypeDefinitionIndex = 55679;

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
