#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TimeRewindRecreateWorldTaskTrigger; }

#define RPG_GAMECORE_TIMEREWINDRECREATEWORLDTASKTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB89360)
#define RPG_GAMECORE_TIMEREWINDRECREATEWORLDTASKTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB891F0)

namespace RPG::GameCore
{
	class TimeRewindRecreateWorldTaskTrigger : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedTime; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Task; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDRECREATEWORLDTASKTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindRecreateWorldTaskTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindRecreateWorldTaskTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDRECREATEWORLDTASKTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
