#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace R3
{
	template <typename T1, typename T2>
	class FromEvent_2__FromEventPattern___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("R3", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("R3", "<>c")->GetStaticField(0x0);
		}

	};
}
