#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace R3
{
	template <typename T>
	class FromEvent_1__FromEventPattern___c : public ::System::Object
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
