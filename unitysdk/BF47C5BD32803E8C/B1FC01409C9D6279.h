#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements { class StyleSheet; }

#define BF47C5BD32803E8C_B1FC01409C9D6279_E03C667100B161C9_OFFSET UNITYSDK_OFFSET(0x42BFCF0)
#define BF47C5BD32803E8C_B1FC01409C9D6279__CTOR_OFFSET UNITYSDK_OFFSET(0x42BFE40)

namespace BF47C5BD32803E8C
{
	inline static constexpr unsigned int B1FC01409C9D6279_TypeDefinitionIndex = 14060;

	struct alignas(8) B1FC01409C9D6279
	{
		::UnityEngine::UIElements::StyleSheet* A09E23F4346ABE8E; // 0x10
		::System::Int32 F94D91300E3AECBB; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UIElements::StyleComplexSelector* AB9D5BFADB131C22; // 0x20

		/*
		static ::System::Int32 E03C667100B161C9(::BF47C5BD32803E8C::B1FC01409C9D6279 B35BBBE7E39341A2, ::BF47C5BD32803E8C::B1FC01409C9D6279 AE40CAA6BBFEAD2C)
		{
			return ((::System::Int32(*)(::BF47C5BD32803E8C::B1FC01409C9D6279, ::BF47C5BD32803E8C::B1FC01409C9D6279))((::PBYTE)hIl2Cpp + BF47C5BD32803E8C_B1FC01409C9D6279_E03C667100B161C9_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		::System::Void _ctor(::UnityEngine::UIElements::StyleSheet* A3240E0B408E3C48, ::System::Int32 AC788735F960396E)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::StyleSheet*, ::System::Int32))((::PBYTE)hIl2Cpp + BF47C5BD32803E8C_B1FC01409C9D6279__CTOR_OFFSET))(this, A3240E0B408E3C48, AC788735F960396E);
		}
	};
}
