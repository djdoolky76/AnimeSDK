#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEnterSafeUI; }

#define RPG_GAMECORE_TRIGGERENTERSAFEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC24930)
#define RPG_GAMECORE_TRIGGERENTERSAFEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC24940)
#define RPG_GAMECORE_TRIGGERENTERSAFEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC248F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEnterSafeUI_TypeDefinitionIndex = 22080;

	class TriggerEnterSafeUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnterSafe; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEnterSafeUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEnterSafeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEnterSafeUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEnterSafeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTERSAFEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
