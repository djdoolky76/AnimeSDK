#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class RogueTournCollectionExhibitionBoothMapItem; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDF8D6A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM_TRIGGERSWITCHITEMICONNOTIFY_OFFSET UNITYSDK_OFFSET(0xDF8D5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionExhibitionBoothMapItem_TypeDefinitionIndex = 69012;

	class RogueTournCollectionExhibitionBoothMapItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BoothID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::RogueTournCollectionExhibitionBoothMapItem* GamepadNextItem; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM_CTOR_OFFSET))(this);
		}

		::System::Void TriggerSwitchItemIconNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONEXHIBITIONBOOTHMAPITEM_TRIGGERSWITCHITEMICONNOTIFY_OFFSET))(this);
		}

	};
}
