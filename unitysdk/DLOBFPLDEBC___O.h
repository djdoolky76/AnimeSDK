#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int DLOBFPLDEBC___O_TypeDefinitionIndex = 49539;

	class DLOBFPLDEBC___O : public ::System::Object
	{
	public:
		static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0____OnTimelineRefEnvProfileLoadFinish()
		{
			return (::RPG::Client::OnAssetOperationDelegate**)UnitySDK::FromName("", "<>O")->GetStaticField(0x55020);
		}

	};
