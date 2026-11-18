#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDA4330)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int MathfInternal_TypeDefinitionIndex = 5044;

	struct alignas(4) MathfInternal
	{
		static ::System::Single* StaticGet_FloatMinDenormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x2550);
		}
		static ::System::Boolean* StaticGet_IsFlushToZeroEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x2554);
		}
		static ::System::Single* StaticGet_FloatMinNormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x2558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET))();
		}
	};
}
