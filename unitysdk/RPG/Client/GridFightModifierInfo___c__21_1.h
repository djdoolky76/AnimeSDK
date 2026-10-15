#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	template <typename T>
	class GridFightModifierInfo___c__21_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__21`1")->GetStaticField(0x0);
		}

		static ::System::Predicate_1<::RPG::Client::GridFightGameModifier*>** StaticGet___9__21_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightGameModifier*>**)UnitySDK::FromName("RPG.Client", "<>c__21`1")->GetStaticField(0x0);
		}

	};
}
