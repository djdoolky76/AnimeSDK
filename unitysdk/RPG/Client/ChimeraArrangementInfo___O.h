#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraArrangementPresetData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class ChimeraArrangementInfo___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChimeraArrangementPresetData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChimeraArrangementPresetData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0xE7C0);
		}

	};
}
