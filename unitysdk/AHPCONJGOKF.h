#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshBattleAvatarPanel; }
namespace RPG::GameCore { class TaskContext; }

#define AHPCONJGOKF_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8A420)
#define AHPCONJGOKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB8A450)

inline static constexpr unsigned int AHPCONJGOKF_TypeDefinitionIndex = 58373;

	class AHPCONJGOKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshBattleAvatarPanel*))((::PBYTE)hIl2Cpp + AHPCONJGOKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPCONJGOKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
