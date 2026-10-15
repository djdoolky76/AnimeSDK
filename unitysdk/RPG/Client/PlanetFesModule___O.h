#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesActiveBuff; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class PlanetFesModule___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IPlanetFesBuff*, ::RPG::Client::PlanetFesActiveBuff*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::RPG::Client::IPlanetFesBuff*, ::RPG::Client::PlanetFesActiveBuff*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x31B60);
		}

	};
}
