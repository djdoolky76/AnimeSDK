#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client
{
	class RPGApplication___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___Quit()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x63EB0);
		}

	};
}
