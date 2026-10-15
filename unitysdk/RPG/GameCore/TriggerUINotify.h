#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerUINotify; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5F4D0)
#define RPG_GAMECORE_TRIGGERUINOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5F4E0)
#define RPG_GAMECORE_TRIGGERUINOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5F4A0)

namespace RPG::GameCore
{
	class TriggerUINotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::Client::TextID TextID; // 0x28
		::Il2CppArray<::System::String*>* StringParams; // 0x38
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueParams; // 0x40
		::System::Boolean WaitCallback; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerUINotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerUINotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerUINotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerUINotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
