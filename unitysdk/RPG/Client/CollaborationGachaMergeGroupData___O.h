#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGachaPoolData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	class CollaborationGachaMergeGroupData___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet__0___BaseGachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x19250);
		}

	};
}
