#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class INGIDLEONOC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE403940)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE4038F0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatFriendTabContentControl_TypeDefinitionIndex = 73434;

	class FriendChatFriendTabContentControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
