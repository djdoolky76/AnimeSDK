#pragma once
#include "unitysdk/unitysdk.h"
class GNAHJKHFMCA;
class HIKAAGHELPH;
namespace RPG::Client { class LocalizedText; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE40E1E0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE40DB10)

namespace RPG::Client::Ui::Samples
{
	class FriendChatContactControl
	{
	public:
		::UnityEngine::UI::Image* _AvatarImage; // 0x70
		::RPG::Client::LocalizedText* _NameText; // 0x78
		::RPG::Client::LocalizedText* _LevelText; // 0x80
		::RPG::UINavigation::UINavigationButton* _UnreadButton; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
