#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessage.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace InControl
{
	class InControlManager___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___LogMessage()
		{
			return (::System::Action**)UnitySDK::FromName("InControl", "<>O")->GetStaticField(0x57DB0);
		}

	};
}
