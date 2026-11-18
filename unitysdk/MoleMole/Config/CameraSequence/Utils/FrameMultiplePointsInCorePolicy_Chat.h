#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameMultiplePointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::CameraSequence::Utils { class FrameTwoPointsInCorePolicy_Chat; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_BLELOIAKHAE_OFFSET UNITYSDK_OFFSET(0x1276E920)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_CFKDIHGMLOA_OFFSET UNITYSDK_OFFSET(0x1276DD30)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_CKOINMFKNCP_OFFSET UNITYSDK_OFFSET(0x1276DAE0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1276B820)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_DAHJOIHAGAI_OFFSET UNITYSDK_OFFSET(0x1276E440)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x1276DB90)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_EBNLNKNJLOB_OFFSET UNITYSDK_OFFSET(0x1276E4F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_ENCGCDGGHAH_OFFSET UNITYSDK_OFFSET(0x1276D630)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x1276D4F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_FFGFCHOACOA_OFFSET UNITYSDK_OFFSET(0x1276E870)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET UNITYSDK_OFFSET(0x1276B9C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1276D2F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_IDJOPAHLGIP_OFFSET UNITYSDK_OFFSET(0x1276DC80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_IDLCMJNNCHI_OFFSET UNITYSDK_OFFSET(0x1276D9D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_JLFJHKICAOM_OFFSET UNITYSDK_OFFSET(0x1276E390)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_JNCFDHPFDHC_OFFSET UNITYSDK_OFFSET(0x1276D920)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_LDNKFBGLEON_OFFSET UNITYSDK_OFFSET(0x1276D780)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_ONPFHFJBDEI_OFFSET UNITYSDK_OFFSET(0x1276E6A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_PJHGOHPIBHC_OFFSET UNITYSDK_OFFSET(0x1276D580)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET UNITYSDK_OFFSET(0x1276B780)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1276D330)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1276D300)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex = 87388;

	class FrameMultiplePointsInCorePolicy_Chat : public ::PipelineCamera::CameraSequence::FrameMultiplePointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12D80);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_radius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12D88);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12D90);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12D98);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12DA0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12DA8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12DB0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_BeginCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12DB8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_deltaHeightToPitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultiplePointsInCorePolicy_Chat_TypeDefinitionIndex)->GetStaticField(0x12DC0);
		}
		::System::Single radius; // 0x40
		::System::Single heightOffset; // 0x44
		::System::Single heightRatio; // 0x48
		::System::Single PlayerHeight; // 0x4C
		::System::Single minAngle; // 0x50
		::System::Single maxAngle; // 0x54
		::System::Single fieldOfView; // 0x58
		::UnityEngine::LayerMask layerMask; // 0x5C
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x60
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* deltaHeightToPitch; // 0x90
		::MoleMole::Config::CameraSequence::Utils::FrameTwoPointsInCorePolicy_Chat* fallback; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 IIEHPIBMFLI, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3> MJBKPLJKAHH)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, IIEHPIBMFLI, MJBKPLJKAHH);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single PJHGOHPIBHC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_PJHGOHPIBHC_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single ENCGCDGGHAH(::UnityEngine::Vector3 IIEHPIBMFLI, ::UnityEngine::Vector3 OPEFELJINOE, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_ENCGCDGGHAH_OFFSET))(this, IIEHPIBMFLI, OPEFELJINOE, AAOCANGHBDG);
		}

		static ::System::Single LDNKFBGLEON(::System::Single DAGBNOIAKKE, ::System::Single NPHOPECPHLF, ::System::Single KKAMDFNMMJH, ::System::Single CLOOHKNDICH)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_LDNKFBGLEON_OFFSET))(DAGBNOIAKKE, NPHOPECPHLF, KKAMDFNMMJH, CLOOHKNDICH);
		}

		::System::Single JNCFDHPFDHC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_JNCFDHPFDHC_OFFSET))(this, AAOCANGHBDG);
		}

		::PipelineCamera::WorldBasicCameraData IDLCMJNNCHI(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_IDLCMJNNCHI_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single CKOINMFKNCP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_CKOINMFKNCP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single IDJOPAHLGIP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_IDJOPAHLGIP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single CFKDIHGMLOA(::UnityEngine::Vector3 IIEHPIBMFLI, ::UnityEngine::Vector3 OPEFELJINOE, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_CFKDIHGMLOA_OFFSET))(this, IIEHPIBMFLI, OPEFELJINOE, AAOCANGHBDG);
		}

		::System::Single JLFJHKICAOM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_JLFJHKICAOM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single DAHJOIHAGAI(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_DAHJOIHAGAI_OFFSET))(this, AAOCANGHBDG);
		}

		static ::UnityEngine::Vector3 EBNLNKNJLOB(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3> CELGKCKLPJC, ::UnityEngine::Vector3 JFLDAALEMGB)
		{
			return ((::UnityEngine::Vector3(*)(::System::Span_1_9011FAD97750D224<::UnityEngine::Vector3>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_EBNLNKNJLOB_OFFSET))(CELGKCKLPJC, JFLDAALEMGB);
		}

		::UnityEngine::Vector3 ONPFHFJBDEI(::UnityEngine::Vector3 IIEHPIBMFLI, ::UnityEngine::Vector3 OPEFELJINOE, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_ONPFHFJBDEI_OFFSET))(this, IIEHPIBMFLI, OPEFELJINOE, AAOCANGHBDG);
		}

		::UnityEngine::AnimationCurve* FFGFCHOACOA(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_FFGFCHOACOA_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single BLELOIAKHAE(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEMULTIPLEPOINTSINCOREPOLICY_CHAT_BLELOIAKHAE_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
