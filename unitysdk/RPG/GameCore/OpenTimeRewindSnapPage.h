#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class OpenTimeRewindSnapPage; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E26E0)
#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E26F0)
#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E26B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTimeRewindSnapPage_TypeDefinitionIndex = 20650;

	class OpenTimeRewindSnapPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* StartRatio; // 0x20
		::RPG::GameCore::DynamicFloat* EndRatio; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTimeRewindSnapPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTimeRewindSnapPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTimeRewindSnapPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTimeRewindSnapPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
