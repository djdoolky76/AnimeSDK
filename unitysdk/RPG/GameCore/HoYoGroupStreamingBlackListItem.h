#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoYoGroupStreamingBlackListItem; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D743460)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D743340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingBlackListItem_TypeDefinitionIndex = 17351;

	class HoYoGroupStreamingBlackListItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoYoGroupStreamingBlackListItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoYoGroupStreamingBlackListItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLISTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
