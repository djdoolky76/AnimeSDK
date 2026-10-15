#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	template <typename T>
	class GridFightTrait___c__20_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__20`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c__20`1")->GetStaticField(0x0);
		}

	};
}
