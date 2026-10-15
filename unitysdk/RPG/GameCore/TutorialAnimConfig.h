#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialAnimConfig; }

#define RPG_GAMECORE_TUTORIALANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC65D50)
#define RPG_GAMECORE_TUTORIALANIMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC65BA0)

namespace RPG::GameCore
{
	class TutorialAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseAnim; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single InitScale; // 0x14
		::System::Single TotalTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALANIMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
