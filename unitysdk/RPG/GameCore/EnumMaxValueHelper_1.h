#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnumMaxValueHelper_1_TypeDefinitionIndex = 53704;

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
