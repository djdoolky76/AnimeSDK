#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournMiracleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class RogueMiracleSelectAction___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournMiracleData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournMiracleData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x65460);
		}

	};
}
