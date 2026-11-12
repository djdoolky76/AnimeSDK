#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvDistrictEnableTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GADBICACCGG_CMMJFAELBKE_OFFSET UNITYSDK_OFFSET(0x1686A580)
#define GADBICACCGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1686A550)
#define GADBICACCGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1686AC30)

inline static constexpr unsigned int GADBICACCGG_TypeDefinitionIndex = 53455;

	class GADBICACCGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDistrictEnableTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDistrictEnableTrigger*))((::PBYTE)hIl2Cpp + GADBICACCGG_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CMMJFAELBKE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADBICACCGG_CMMJFAELBKE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADBICACCGG_ONTASKBEGIN_OFFSET))(this);
		}

	};
