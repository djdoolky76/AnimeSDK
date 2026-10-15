#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class MFDGGFKPBMH;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE410780)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE410730)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatRoomTabContentControl_TypeDefinitionIndex = 73454;

	class FriendChatRoomTabContentControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
