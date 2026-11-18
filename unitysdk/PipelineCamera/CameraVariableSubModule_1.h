#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraVariableSubModule_1_TypeDefinitionIndex = 36204;

	template <typename T>
	class CameraVariableSubModule_1 : public ::System::Object
	{
	public:
		::System::Int32 _priority; // 0x0
		::System::Int32 _activeChannel; // 0x0
		::System::Int32 _processedChannelMask; // 0x0
		::Foundation::Unreal::FName _debugName; // 0x0
		::Foundation::Variable_2<T, ::PipelineCamera::CameraVariableFetchContext_1<T>> _variable; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _blenderBuilder; // 0x0
	};
}
