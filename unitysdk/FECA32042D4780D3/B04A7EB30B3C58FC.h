#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FECA32042D4780D3_B04A7EB30B3C58FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x4150A70)

namespace FECA32042D4780D3
{
	inline static constexpr unsigned int B04A7EB30B3C58FC_TypeDefinitionIndex = 17312;

	struct alignas(4) B04A7EB30B3C58FC
	{
		static ::System::Single* StaticGet_E8AC0CA9D117E954()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B04A7EB30B3C58FC_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Single* StaticGet_FE2FDD758FB15FAC()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B04A7EB30B3C58FC_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Boolean* StaticGet_FA54087C9CF83608()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(B04A7EB30B3C58FC_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FECA32042D4780D3_B04A7EB30B3C58FC__CCTOR_OFFSET))();
		}
	};
}
