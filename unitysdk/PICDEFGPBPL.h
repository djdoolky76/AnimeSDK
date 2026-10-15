#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByBattleMissionTalkFinish; }
namespace RPG::GameCore { class TaskContext; }

#define PICDEFGPBPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC25CBA0)
#define PICDEFGPBPL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC25CBD0)

inline static constexpr unsigned int PICDEFGPBPL_TypeDefinitionIndex = 57964;

	class PICDEFGPBPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + PICDEFGPBPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDEFGPBPL_EVALUATE_OFFSET))(this);
		}

	};
