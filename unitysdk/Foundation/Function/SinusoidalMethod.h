#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Function/Sinusoidal.h"
#include "unitysdk/Foundation/Function/WithConstant_1.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/ValueTuple_3.h"

#define FOUNDATION_FUNCTION_SINUSOIDALMETHOD_GET_OFFSET UNITYSDK_OFFSET(0x1E5F9B10)
#define FOUNDATION_FUNCTION_SINUSOIDALMETHOD_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1E5F9B40)
#define FOUNDATION_FUNCTION_SINUSOIDALMETHOD_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1E5F9B30)
#define FOUNDATION_FUNCTION_SINUSOIDALMETHOD_RANGE_OFFSET UNITYSDK_OFFSET(0x1E5F9B50)
#define FOUNDATION_FUNCTION_SINUSOIDALMETHOD_RESOLVEGREATER_OFFSET UNITYSDK_OFFSET(0x1E5F9AB0)
#define FOUNDATION_FUNCTION_SINUSOIDALMETHOD_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1E5F9AF0)

namespace Foundation::Function
{
	inline static constexpr unsigned int SinusoidalMethod_TypeDefinitionIndex = 8933;

	class SinusoidalMethod : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::Interval_1<::System::Single> ResolveGreater(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>& self, ::System::Single value)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDALMETHOD_RESOLVEGREATER_OFFSET))(self, value);
		}

		static ::System::Double Resolve(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>& self, ::System::Double cosValue, ::System::Double sinValue)
		{
			return ((::System::Double(*)(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>&, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDALMETHOD_RESOLVE_OFFSET))(self, cosValue, sinValue);
		}

		static ::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double> Get(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>& self)
		{
			return ((::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDALMETHOD_GET_OFFSET))(self);
		}

		static ::System::Double MinValue(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>& self)
		{
			return ((::System::Double(*)(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDALMETHOD_MINVALUE_OFFSET))(self);
		}

		static ::System::Double MaxValue(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>& self)
		{
			return ((::System::Double(*)(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>&))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDALMETHOD_MAXVALUE_OFFSET))(self);
		}

		static ::Foundation::Unreal::Interval_1<::System::Double> Range(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>& self, ::System::Double minTheta, ::System::Double thetaRange)
		{
			return ((::Foundation::Unreal::Interval_1<::System::Double>(*)(::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>&, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTION_SINUSOIDALMETHOD_RANGE_OFFSET))(self, minTheta, thetaRange);
		}
	};
}
