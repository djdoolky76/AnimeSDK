#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_ENSUREINITIALIZEDSLOW_OFFSET UNITYSDK_OFFSET(0x1F4FE3B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F4FE360)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_FINDINITIALIZERTYPE_OFFSET UNITYSDK_OFFSET(0x1F4FE590)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_MARKINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F4FE7B0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContextVariableAccessorRegistry_TypeDefinitionIndex = 36602;

	class CameraSequenceContextVariableAccessorRegistry : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceContextVariableAccessorRegistry_TypeDefinitionIndex)->GetStaticField(0x9090);
		}
		// static const ::System::String* InitializerTypeName; // 0x0
		// static const ::System::String* EnsureInitializedMethodName; // 0x0

		static ::System::Void EnsureInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_ENSUREINITIALIZED_OFFSET))();
		}

		static ::System::Void EnsureInitializedSlow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_ENSUREINITIALIZEDSLOW_OFFSET))();
		}

		static ::System::Void MarkInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_MARKINITIALIZED_OFFSET))();
		}

		static ::System::Type* FindInitializerType()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTVARIABLEACCESSORREGISTRY_FINDINITIALIZERTYPE_OFFSET))();
		}
	};
}
