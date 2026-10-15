#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__22_1_TypeDefinitionIndex = 65041;

	template <typename T>
	class GridFightModifierInfo___c__22_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__22`1")->GetStaticField(0x0);
		}

		static ::System::Predicate_1<::RPG::Client::GridFightGameModifier*>** StaticGet___9__22_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightGameModifier*>**)UnitySDK::FromName("RPG.Client", "<>c__22`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameModifier*, T>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameModifier*, T>**)UnitySDK::FromName("RPG.Client", "<>c__22`1")->GetStaticField(0x0);
		}

	};
}
