#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideShowConfig; }

#define RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6B240)
#define RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6B010)

namespace RPG::GameCore
{
	class TutorialGuideShowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseCustomConfig; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single ScaleX; // 0x14
		::System::Single ScaleY; // 0x18
		::System::Single OffsetX; // 0x1C
		::System::Single OffsetY; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialGuideShowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialGuideShowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
