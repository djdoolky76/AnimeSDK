#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class RogueTournDiffCompDifficultyData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6C890);
		}

	};
}
