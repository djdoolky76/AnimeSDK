#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	template <typename T>
	class GridFightFlowDirector_TransitionRule_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

		static ::System::Predicate_1<T>** StaticGet___9__0_0()
		{
			return (::System::Predicate_1<T>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

	};
}
