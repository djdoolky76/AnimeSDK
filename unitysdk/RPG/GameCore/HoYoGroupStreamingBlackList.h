#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoYoGroupStreamingBlackList; }
namespace RPG::GameCore { class HoYoGroupStreamingBlackListItem; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D743330)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D743240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingBlackList_TypeDefinitionIndex = 17352;

	class HoYoGroupStreamingBlackList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoYoGroupStreamingBlackListItem*>* BlackList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoYoGroupStreamingBlackList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoYoGroupStreamingBlackList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGBLACKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
