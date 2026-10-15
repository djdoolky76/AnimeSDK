#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideFloorDefaultEmotion; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E78A0)
#define RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E78B0)
#define RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E7870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideFloorDefaultEmotion_TypeDefinitionIndex = 21275;

	class OverrideFloorDefaultEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EmotionName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
