#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class TaskContext; }

#define FCLLFGOIMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156CE390)
#define FCLLFGOIMPJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156CE3C0)

	class FCLLFGOIMPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + FCLLFGOIMPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLLFGOIMPJ_EVALUATE_OFFSET))(this);
		}

	};
