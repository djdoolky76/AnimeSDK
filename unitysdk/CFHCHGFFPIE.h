#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEnableButtons; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CFHCHGFFPIE_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0xCC46170)
#define CFHCHGFFPIE_CTOR_OFFSET UNITYSDK_OFFSET(0xCC46140)
#define CFHCHGFFPIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC46310)

inline static constexpr unsigned int CFHCHGFFPIE_TypeDefinitionIndex = 52351;

	class CFHCHGFFPIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableButtons* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + CFHCHGFFPIE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CMMJFAELBKE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHCHGFFPIE_CMMJFAELBKE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHCHGFFPIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
