#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WheelItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockWheelItem; }

#define RPG_GAMECORE_BLOCKWHEELITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D471080)
#define RPG_GAMECORE_BLOCKWHEELITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D471090)
#define RPG_GAMECORE_BLOCKWHEELITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D471050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockWheelItem_TypeDefinitionIndex = 24276;

	class BlockWheelItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::WheelItemType TutorialGuideWheelItem; // 0x1C
		::RPG::GameCore::ShortCutWheelGotoType TutorialGuideLittleWheelItem; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKWHEELITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockWheelItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockWheelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKWHEELITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockWheelItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockWheelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKWHEELITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
