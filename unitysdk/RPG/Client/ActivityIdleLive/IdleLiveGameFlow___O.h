#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGameFlow___O_TypeDefinitionIndex = 77624;

	class IdleLiveGameFlow___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__3___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>O")->GetStaticField(0x1F740);
		}

		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__2___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>O")->GetStaticField(0x1F748);
		}

		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__1___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>O")->GetStaticField(0x1F750);
		}

		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>O")->GetStaticField(0x1F758);
		}

	};
}
