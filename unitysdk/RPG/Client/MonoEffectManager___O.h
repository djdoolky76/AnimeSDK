#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	class MonoEffectManager___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet__0___GetEffectPathLOD()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x5E9D0);
		}

	};
}
