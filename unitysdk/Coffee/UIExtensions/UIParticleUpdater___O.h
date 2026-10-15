#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace Coffee::UIExtensions
{
	class UIParticleUpdater___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___Refresh()
		{
			return (::System::Action**)UnitySDK::FromName("Coffee.UIExtensions", "<>O")->GetStaticField(0x1060);
		}

	};
}
