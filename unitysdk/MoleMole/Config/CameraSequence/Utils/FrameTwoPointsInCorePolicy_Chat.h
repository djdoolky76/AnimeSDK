#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameTwoPointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_BLELOIAKHAE_OFFSET UNITYSDK_OFFSET(0x19294270)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x19293260)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x19293FB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_EKBKBFPGOGP_OFFSET UNITYSDK_OFFSET(0x192940A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x19294580)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET UNITYSDK_OFFSET(0x19293400)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x19293E80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_IDLCMJNNCHI_OFFSET UNITYSDK_OFFSET(0x19294150)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_JEBMDIEKBLK_OFFSET UNITYSDK_OFFSET(0x19294320)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_JPDPGCLKJAK_OFFSET UNITYSDK_OFFSET(0x19294610)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET UNITYSDK_OFFSET(0x192931C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19293F00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19293E90)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex = 65680;

	class FrameTwoPointsInCorePolicy_Chat : public ::PipelineCamera::CameraSequence::FrameTwoPointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x13AC0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x13AC8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_TargetHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x13AD0);
		}
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x40
		::System::Single heightRatio; // 0x48
		::System::Single minPlayerHeightRatio; // 0x4C
		::System::Single maxPlayerHeightRatio; // 0x50
		::System::Single fieldOfView; // 0x54
		::System::Single pitch; // 0x58
		::System::Single minAngle; // 0x5C
		::System::Single maxAngle; // 0x60
		::System::Single subHorizontalOffset; // 0x64
		::System::Single mainHorizontalOffset; // 0x68
		::System::Single mainVerticalOffset; // 0x6C
		::System::Single minTargetVerticalOffset; // 0x70
		::System::Single maxTargetVerticalOffset; // 0x74
		::System::Single minPitch; // 0x78
		::System::Single maxPitch; // 0x7C
		::System::Single PlayerHeight; // 0x80
		::System::Single TargetHeight; // 0x84
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 AJLBBHOJJFF, ::UnityEngine::Vector3 CHCJBBOMHCM)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, AJLBBHOJJFF, CHCJBBOMHCM);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single EKBKBFPGOGP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_EKBKBFPGOGP_OFFSET))(this, AAOCANGHBDG);
		}

		::PipelineCamera::WorldBasicCameraData IDLCMJNNCHI(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_IDLCMJNNCHI_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single BLELOIAKHAE(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_BLELOIAKHAE_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void JEBMDIEKBLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_JEBMDIEKBLK_OFFSET))(this);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::System::Single> JPDPGCLKJAK(::UnityEngine::Vector3& AJLBBHOJJFF, ::UnityEngine::Vector3& CHCJBBOMHCM, ::System::Single NELAJOPANDI, ::PipelineCamera::WorldBasicCameraData& BBCLBJLFLKO)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Single>(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_CHAT_JPDPGCLKJAK_OFFSET))(AJLBBHOJJFF, CHCJBBOMHCM, NELAJOPANDI, BBCLBJLFLKO);
		}
	};
}
