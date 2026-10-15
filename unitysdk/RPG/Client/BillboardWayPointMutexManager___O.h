#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIBillboard; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	class BillboardWayPointMutexManager___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::UIBillboard*>** StaticGet__0____CompareBillboardsByCameraDistance()
		{
			return (::System::Comparison_1<::RPG::Client::UIBillboard*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x5DE10);
		}

	};
}
