#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchOverrideController; }

#define RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17330)
#define RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB17340)
#define RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB17300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchOverrideController_TypeDefinitionIndex = 22763;

	class SwitchOverrideController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchOverrideController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchOverrideController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchOverrideController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchOverrideController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
