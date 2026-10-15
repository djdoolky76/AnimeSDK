#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityRebateTriggerData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRebateData___O_TypeDefinitionIndex = 61900;

	class ActivityRebateData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityRebateTriggerData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityRebateTriggerData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x3AF60);
		}

	};
}
