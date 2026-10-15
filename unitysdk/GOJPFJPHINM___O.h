#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int GOJPFJPHINM___O_TypeDefinitionIndex = 41585;

	class GOJPFJPHINM___O : public ::System::Object
	{
	public:
		static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0___OnAsyncLoaded()
		{
			return (::RPG::Client::OnAssetOperationDelegate**)UnitySDK::FromName("", "<>O")->GetStaticField(0x120E0);
		}

	};
