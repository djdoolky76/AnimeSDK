#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WheelItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitSelectWheelItem; }

#define RPG_GAMECORE_WAITSELECTWHEELITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1490)
#define RPG_GAMECORE_WAITSELECTWHEELITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA14A0)
#define RPG_GAMECORE_WAITSELECTWHEELITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA1460)

namespace RPG::GameCore
{
	class WaitSelectWheelItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WheelItemType TutorialGuideWheelItem; // 0x18
		::RPG::GameCore::ShortCutWheelGotoType TutorialGuideLittleWheelItem; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSELECTWHEELITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSelectWheelItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSelectWheelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSELECTWHEELITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSelectWheelItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSelectWheelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSELECTWHEELITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
