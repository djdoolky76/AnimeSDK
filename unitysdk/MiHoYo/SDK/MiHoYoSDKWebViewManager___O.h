#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___O_TypeDefinitionIndex = 46622;

	class MiHoYoSDKWebViewManager___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__1___OnSyncInitRecoveredGlobal()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x2E500);
		}

		static ::System::Action** StaticGet__0___OnShutDown()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x2E508);
		}

	};
}
