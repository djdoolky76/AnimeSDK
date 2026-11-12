#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace InControl { class DeadZoneFunc; }

namespace InControl
{
	inline static constexpr unsigned int TwoAxisInputControl___O_TypeDefinitionIndex = 41805;

	class TwoAxisInputControl___O : public ::System::Object
	{
	public:
		static ::InControl::DeadZoneFunc** StaticGet__0___Circular()
		{
			return (::InControl::DeadZoneFunc**)UnitySDK::FromName("InControl", "<>O")->GetStaticField(0x6B010);
		}

	};
}
