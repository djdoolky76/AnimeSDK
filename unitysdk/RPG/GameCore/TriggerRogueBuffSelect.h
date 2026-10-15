#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueBuffSelect; }

#define RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2AAB0)
#define RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2AAC0)
#define RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2AA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueBuffSelect_TypeDefinitionIndex = 20479;

	class TriggerRogueBuffSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueBuffSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueBuffSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueBuffSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueBuffSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
