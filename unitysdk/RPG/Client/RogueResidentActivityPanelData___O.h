#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityTagData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class RogueResidentActivityPanelData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityTagData*>** StaticGet__0___GetTag()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityTagData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x667C0);
		}

	};
}
