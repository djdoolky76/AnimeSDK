#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameMultiplePointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/FrameMultiplePointsInCorePolicy_ChatByScore_FAMAINGDIAP.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x19B11460)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x19B11BB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x19B11CA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_FKGNIHPONNB_OFFSET UNITYSDK_OFFSET(0x19B11AD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B11610)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x19B11600)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_SETPATH_OFFSET UNITYSDK_OFFSET(0x19B113C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B11880)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B11850)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex = 75829;

	class FrameMultiplePointsInCorePolicy_ChatByScore : public ::PipelineCamera::CameraSequence::FrameMultiplePointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_deviationPenalty()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0C0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0C8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0D0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0D8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_overlapPenalty()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0E8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0F0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_horizontalRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB0F8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_variancePenalty()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB100);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB108);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_sampleStep()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB110);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minRadius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_ChatByScore_TypeDefinitionIndex)->GetStaticField(0xB118);
		}
		// static const ::System::Single TargetRadius; // 0x0
		::System::Single minRadius; // 0x40
		::System::Single heightOffset; // 0x44
		::System::Single horizontalRatio; // 0x48
		::System::Int32 minAngle; // 0x4C
		::System::Int32 maxAngle; // 0x50
		::System::Single fieldOfView; // 0x54
		::System::Single deviationPenalty; // 0x58
		::System::Single overlapPenalty; // 0x5C
		::System::Single variancePenalty; // 0x60
		::System::Single pitch; // 0x64
		::System::Int32 sampleStep; // 0x68
		::UnityEngine::LayerMask layerMask; // 0x6C
		::PipelineCamera::CameraSequence::AspectRatioPolicy* aspectRatioPolicy; // 0x70
		::System::Boolean makeContextDependent; // 0x78
		::System::Byte _padding0[0x3];
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 IIEHPIBMFLI, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3> MJBKPLJKAHH)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, IIEHPIBMFLI, MJBKPLJKAHH);
		}

		::MoleMole::Config::CameraSequence::Utils::FrameMultiplePointsInCorePolicy_ChatByScore_FAMAINGDIAP FKGNIHPONNB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::MoleMole::Config::CameraSequence::Utils::FrameMultiplePointsInCorePolicy_ChatByScore_FAMAINGDIAP(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_FKGNIHPONNB_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHATBYSCORE_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
