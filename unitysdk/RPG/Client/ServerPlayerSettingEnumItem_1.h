#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ServerPlayerSettingItem.h"
namespace System { class Action; }

namespace RPG::Client
{
	template <typename T>
	class ServerPlayerSettingEnumItem_1 : public ::RPG::Client::ServerPlayerSettingItem
	{
	public:
		::System::Action* _ClientPrefSetter_k__BackingField; // 0x0
	};
}
