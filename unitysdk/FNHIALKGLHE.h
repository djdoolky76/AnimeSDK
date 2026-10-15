#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForbidBattleConditionOnStart; }
namespace RPG::GameCore { class TaskContext; }

#define FNHIALKGLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15871690)
#define FNHIALKGLHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158716C0)

inline static constexpr unsigned int FNHIALKGLHE_TypeDefinitionIndex = 58125;

	class FNHIALKGLHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForbidBattleConditionOnStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForbidBattleConditionOnStart*))((::PBYTE)hIl2Cpp + FNHIALKGLHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHIALKGLHE_ONTASKBEGIN_OFFSET))(this);
		}

	};
