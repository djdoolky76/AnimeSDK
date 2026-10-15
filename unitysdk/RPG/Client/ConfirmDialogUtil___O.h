#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }

namespace RPG::Client
{
	class ConfirmDialogUtil___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__1___OnFocusChange()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x1C1F0);
		}

		static ::System::Action** StaticGet__0___OnDialogExit()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x1C1F8);
		}

	};
}
