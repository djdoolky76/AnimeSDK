#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext_ScopedWorkspaceHandle.h"
#include "unitysdk/System/Guid.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEnvironment; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceBindingResolver; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_CLEARENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1F9DE4B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ENSUREWORKSPACEID_OFFSET UNITYSDK_OFFSET(0x1F9DDF30)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDINSETTING_OFFSET UNITYSDK_OFFSET(0x1F9DE670)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDOUTSETTING_OFFSET UNITYSDK_OFFSET(0x1F9DE6C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1F9DE140)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F9DE0B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ISSHAREDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F9DE070)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_1_OFFSET UNITYSDK_OFFSET(0x1F9DE360)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_OFFSET UNITYSDK_OFFSET(0x1F9DE1B0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SETBINDINGRESOLVER_OFFSET UNITYSDK_OFFSET(0x1F9DE620)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DDB40)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContext_TypeDefinitionIndex = 36598;

	class CameraSequenceContext : public ::System::Object
	{
	public:
		::Il2CppArray<::PipelineCamera::CameraSequence::CameraSequenceEnvironment*>* _environment; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath _workspace; // 0x18
		::PipelineCamera::CameraSequence::ICameraSequenceBindingResolver* _bindingResolver; // 0x48
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::System::Int32>* _cachedWorkspaceId; // 0x50
		::System::UInt32 _workspaceId; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void EnsureWorkspaceId(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath newWorkspace)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ENSUREWORKSPACEID_OFFSET))(this, newWorkspace);
		}

		static ::System::Boolean IsSharedContext(::PipelineCamera::CameraSequence::CameraSequenceVariableType variableType)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ISSHAREDCONTEXT_OFFSET))(variableType);
		}

		::Foundation::Unreal::FName GetInternalIdentifier(::Foundation::Unreal::FName identifier, ::PipelineCamera::CameraSequence::CameraSequenceVariableType contextType)
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID, ::Foundation::Unreal::FName, ::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALIDENTIFIER_OFFSET))(this, identifier, contextType);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEnvironment* GetInternalEnvironment(::PipelineCamera::CameraSequence::CameraSequenceVariableType variableType)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEnvironment*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALENVIRONMENT_OFFSET))(this, variableType);
		}

		::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle ScopedWorkspace(::System::Guid newWorkspace)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_OFFSET))(this, newWorkspace);
		}

		::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle ScopedWorkspace_1(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& newWorkspace)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_1_OFFSET))(this, newWorkspace);
		}

		::System::Void ClearEnvironment(::PipelineCamera::CameraSequence::CameraSequenceVariableType variableType)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_CLEARENVIRONMENT_OFFSET))(this, variableType);
		}

		::System::Void SetBindingResolver(::PipelineCamera::CameraSequence::ICameraSequenceBindingResolver* bindingResolver)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceBindingResolver*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SETBINDINGRESOLVER_OFFSET))(this, bindingResolver);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* GetBlendInSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDINSETTING_OFFSET))(this, fallback);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* GetBlendOutSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDOUTSETTING_OFFSET))(this, fallback);
		}
	};
}
