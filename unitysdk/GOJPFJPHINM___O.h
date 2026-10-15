#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class OnAssetOperationDelegate; }

	class GOJPFJPHINM___O : public ::System::Object
	{
	public:
		static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0___OnAsyncLoaded()
		{
			return (::RPG::Client::OnAssetOperationDelegate**)UnitySDK::FromName("", "<>O")->GetStaticField(0x120E0);
		}

	};
