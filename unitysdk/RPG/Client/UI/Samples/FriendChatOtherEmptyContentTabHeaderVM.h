#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/FriendChatTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATOTHEREMPTYCONTENTTABHEADERVM_CTOR_OFFSET UNITYSDK_OFFSET(0xE40E6F0)

namespace RPG::Client::Ui::Samples
{
	class FriendChatOtherEmptyContentTabHeaderVM : public ::RPG::Client::Ui::Samples::FriendChatTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATOTHEREMPTYCONTENTTABHEADERVM_CTOR_OFFSET))(this);
		}

	};
}
