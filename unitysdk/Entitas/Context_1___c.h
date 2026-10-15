#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class GroupChanged_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Entitas
{
	template <typename T>
	class Context_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<T>*>*>** StaticGet___9__44_1()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::Entitas::GroupChanged_1<T>*>*>**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__44_2()
		{
			return (::System::Action**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x0);
		}

	};
}
