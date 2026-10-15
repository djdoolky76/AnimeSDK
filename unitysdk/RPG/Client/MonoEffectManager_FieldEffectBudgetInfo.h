#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class TriggerEffectParams; }

namespace RPG::Client
{
	struct alignas(8) MonoEffectManager_FieldEffectBudgetInfo
	{
		::RPG::Client::TriggerEffectParams* TriggerEffectParams; // 0x10
		::System::Single Budget; // 0x18
	};
}
