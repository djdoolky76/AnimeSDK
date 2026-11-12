#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableRoleTrialChangeLineupLeader; }
namespace RPG::GameCore { class TaskContext; }

#define HJKHAHOOKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16C7BC90)
#define HJKHAHOOKPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C7BCC0)

inline static constexpr unsigned int HJKHAHOOKPC_TypeDefinitionIndex = 59349;

	class HJKHAHOOKPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*))((::PBYTE)hIl2Cpp + HJKHAHOOKPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKHAHOOKPC_ONTASKBEGIN_OFFSET))(this);
		}

	};
