#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class Condition; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::ChenLingBattle
{
	class HandCard___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Condition*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Condition*>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "<>O")->GetStaticField(0x6E590);
		}

	};
}
