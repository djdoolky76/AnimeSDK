#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B4730)
#define RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B4740)
#define RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A3260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerShape_TypeDefinitionIndex = 18533;

	class FiveDimTriggerShape : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean UseTriggerFromView; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* TriggerName; // 0x18
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerShape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerShape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerShape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerShape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
