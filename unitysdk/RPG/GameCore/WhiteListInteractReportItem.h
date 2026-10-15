#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WhiteListInteractReportItem; }

#define RPG_GAMECORE_WHITELISTINTERACTREPORTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79EE0)
#define RPG_GAMECORE_WHITELISTINTERACTREPORTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC79D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WhiteListInteractReportItem_TypeDefinitionIndex = 17636;

	class WhiteListInteractReportItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 InstanceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITELISTINTERACTREPORTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WhiteListInteractReportItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WhiteListInteractReportItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITELISTINTERACTREPORTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
