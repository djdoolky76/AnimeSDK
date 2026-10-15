#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int AIBOPLOBAFN___O_TypeDefinitionIndex = 59385;

	class AIBOPLOBAFN___O : public ::System::Object
	{
	public:
		static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0____OnAsyncLoadFinish()
		{
			return (::RPG::Client::OnAssetOperationDelegate**)UnitySDK::FromName("", "<>O")->GetStaticField(0x57B50);
		}

	};
