#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValue_DynamicValueType.h"

#define RPG_GAMECORE_DYNAMICVALUE_UNIONVALUE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5FEA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue_UnionValue_TypeDefinitionIndex = 10839;

	struct alignas(4) DynamicValue_UnionValue
	{
		::System::Double doubleValue; // 0x10
		::System::Int64 longValue; // 0x10
		::RPG::GameCore::DynamicValue_DynamicValueType valueType; // 0x18
		static ::RPG::GameCore::DynamicValue_UnionValue* StaticGet_Empty()
		{
			return (::RPG::GameCore::DynamicValue_UnionValue*)UnitySDK::FromName("RPG.GameCore", "UnionValue")->GetStaticField(0x76B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_UNIONVALUE_CCTOR_OFFSET))();
		}

	};
}
