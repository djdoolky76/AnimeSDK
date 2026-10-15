#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtFlagDesc_1_TypeDefinitionIndex = 53991;

	template <typename T>
	class RtFlagDesc_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Count()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "RtFlagDesc`1")->GetStaticField(0x0);
		}

	};
}
