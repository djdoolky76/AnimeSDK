#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Function/Sinusoidal___c__DisplayClass21_0.h"
#include "unitysdk/Foundation/Function/WithConstant_1.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"

#define FOUNDATION_FUNCTION_SINUSOIDAL_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x9085E0)
#define FOUNDATION_FUNCTION_SINUSOIDAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x908590)
#define FOUNDATION_FUNCTION_SINUSOIDAL_GET_COSCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x403BB0)
#define FOUNDATION_FUNCTION_SINUSOIDAL_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x654720)
#define FOUNDATION_FUNCTION_SINUSOIDAL_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x908530)
#define FOUNDATION_FUNCTION_SINUSOIDAL_GET_SINCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x42D920)
#define FOUNDATION_FUNCTION_SINUSOIDAL_NEW_OFFSET UNITYSDK_OFFSET(0x1E5F9030)
#define FOUNDATION_FUNCTION_SINUSOIDAL_RANGE_OFFSET UNITYSDK_OFFSET(0x908630)
#define FOUNDATION_FUNCTION_SINUSOIDAL_RESOLVEGREATER_OFFSET UNITYSDK_OFFSET(0x908610)
#define FOUNDATION_FUNCTION_SINUSOIDAL__CTOR_OFFSET UNITYSDK_OFFSET(0x908540)
#define FOUNDATION_FUNCTION_SINUSOIDAL__RANGE_G__UPDATEVALUE_21_0_OFFSET UNITYSDK_OFFSET(0x1E5F9A50)

namespace Foundation::Function
{
	inline static constexpr unsigned int Sinusoidal_TypeDefinitionIndex = 9049;

	struct alignas(4) Sinusoidal
	{
		::System::Double _a; // 0x10
		::System::Double _b; // 0x18
		::System::Double _w; // 0x20
		::System::Double _amplitude; // 0x28
		::System::Double _phase; // 0x30

		::System::Void _ctor(::System::Double a, ::System::Double b, ::System::Double w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL__CTOR_OFFSET))(this, a, b, w);
		}

		::System::Double get_CosCoefficient()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_GET_COSCOEFFICIENT_OFFSET))(this);
		}

		::System::Double get_SinCoefficient()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_GET_SINCOEFFICIENT_OFFSET))(this);
		}

		::System::Double get_MinValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_GET_MINVALUE_OFFSET))(this);
		}

		::System::Double get_MaxValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_GET_MAXVALUE_OFFSET))(this);
		}

		/*
		static ::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> New(::System::Double a, ::System::Double b, ::System::Double c)
		{
			return ((::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_NEW_OFFSET))(a, b, c);
		}
		*/

		::System::Single Evaluate(::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_EVALUATE_OFFSET))(this, x);
		}

		::System::Double Evaluate_1(::System::Double x)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_EVALUATE_1_OFFSET))(this, x);
		}

		::Foundation::Unreal::Interval_1<::System::Single> ResolveGreater(::System::Single value)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_RESOLVEGREATER_OFFSET))(this, value);
		}

		::Foundation::Unreal::Interval_1<::System::Double> Range(::System::Double minTheta, ::System::Double thetaRange)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Double>(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL_RANGE_OFFSET))(this, minTheta, thetaRange);
		}

		static ::System::Void _Range_g__UpdateValue_21_0(::System::Double value, ::Foundation::Function::Sinusoidal___c__DisplayClass21_0& param_1)
		{
			return ((::System::Void(*)(::System::Double, ::Foundation::Function::Sinusoidal___c__DisplayClass21_0&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDAL__RANGE_G__UPDATEVALUE_21_0_OFFSET))(value, param_1);
		}
	};
}
