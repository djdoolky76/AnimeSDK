#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace InControl { class DeadZoneFunc; }

namespace InControl
{
	class InputDevice___O : public ::System::Object
	{
	public:
		static ::InControl::DeadZoneFunc** StaticGet__0___Separate()
		{
			return (::InControl::DeadZoneFunc**)UnitySDK::FromName("InControl", "<>O")->GetStaticField(0x58280);
		}

	};
}
