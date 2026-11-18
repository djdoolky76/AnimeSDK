#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/Sinusoidal.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E842B00)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E842B40)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__GETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E842B50)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_Sinusoidal___c_TypeDefinitionIndex = 36546;

	class AlphaGeneratorPolicy_Sinusoidal___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Single, ::Foundation::Function::Sinusoidal>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Single, ::Foundation::Function::Sinusoidal>**)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal___c_TypeDefinitionIndex)->GetStaticField(0x2B9B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Sinusoidal___c_TypeDefinitionIndex)->GetStaticField(0x2B9B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__CTOR_OFFSET))(this);
		}

		::Foundation::Function::Sinusoidal _GetData_b__7_0(::System::Single p)
		{
			return ((::Foundation::Function::Sinusoidal(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SINUSOIDAL___C__GETDATA_B__7_0_OFFSET))(this, p);
		}
	};
}
