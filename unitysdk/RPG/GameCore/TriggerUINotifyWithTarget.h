#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerUINotifyWithTarget; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5F810)
#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5F820)
#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5F7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUINotifyWithTarget_TypeDefinitionIndex = 22925;

	class TriggerUINotifyWithTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
