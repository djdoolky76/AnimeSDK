#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil___O_TypeDefinitionIndex = 72714;

	class ConfirmDialogUtil___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___OnDialogExit()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x19780);
		}

		static ::RPG::Client::NotifyHandler** StaticGet__1___OnFocusChange()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x19788);
		}

	};
}
