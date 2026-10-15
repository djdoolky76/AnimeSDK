#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class EnumMaxValueHelper_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MaxValue()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "EnumMaxValueHelper`1")->GetStaticField(0x0);
		}

	};
}
