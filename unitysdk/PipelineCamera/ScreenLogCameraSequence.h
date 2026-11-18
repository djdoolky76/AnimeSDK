#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int ScreenLogCameraSequence_TypeDefinitionIndex = 36298;

	class ScreenLogCameraSequence : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DebugCameraSequenceTrack()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenLogCameraSequence_TypeDefinitionIndex)->GetStaticField(0x8FF0);
		}
		static ::System::Boolean* StaticGet_DebugCameraSequenceEvent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenLogCameraSequence_TypeDefinitionIndex)->GetStaticField(0x8FF1);
		}
		static ::System::Boolean* StaticGet_DebugCameraSequenceStep()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenLogCameraSequence_TypeDefinitionIndex)->GetStaticField(0x8FF2);
		}
	};
}
