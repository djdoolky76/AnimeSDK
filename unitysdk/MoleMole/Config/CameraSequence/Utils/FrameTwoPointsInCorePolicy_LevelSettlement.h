#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameTwoPointsInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_AGOPFANLFHK_OFFSET UNITYSDK_OFFSET(0x11E86650)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_BJDGPKMBAOF_OFFSET UNITYSDK_OFFSET(0x11E868E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x11E83540)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_COMMGCMMBDJ_OFFSET UNITYSDK_OFFSET(0x11E86990)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_CPBMOADGKLN_OFFSET UNITYSDK_OFFSET(0x11E86020)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x11E85C20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x11E86200)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FIHECEFKDIN_OFFSET UNITYSDK_OFFSET(0x11E85DD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FMNKJIDNKIH_OFFSET UNITYSDK_OFFSET(0x11E86A40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FODJCHIHBOK_OFFSET UNITYSDK_OFFSET(0x11E86760)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GETDATA_OFFSET UNITYSDK_OFFSET(0x11E836E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11E857C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_HDLFCIOLGGL_OFFSET UNITYSDK_OFFSET(0x11E860E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_IDJOPAHLGIP_OFFSET UNITYSDK_OFFSET(0x11E85B60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_IEPHBBCGGDO_OFFSET UNITYSDK_OFFSET(0x11E86B00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_INHJKMNCOKL_OFFSET UNITYSDK_OFFSET(0x11E86820)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_JLFJHKICAOM_OFFSET UNITYSDK_OFFSET(0x11E864D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_JNCFDHPFDHC_OFFSET UNITYSDK_OFFSET(0x11E86410)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_KDDCCIOBCFD_OFFSET UNITYSDK_OFFSET(0x11E85D10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_LDNKFBGLEON_OFFSET UNITYSDK_OFFSET(0x11E85E80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_MFJEEENLADM_OFFSET UNITYSDK_OFFSET(0x11E86590)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_MMMMLOEOJJG_OFFSET UNITYSDK_OFFSET(0x11E86290)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_PJHGOHPIBHC_OFFSET UNITYSDK_OFFSET(0x11E86350)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_SETPATH_OFFSET UNITYSDK_OFFSET(0x11E834A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E85840)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E857D0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex = 61002;

	class FrameTwoPointsInCorePolicy_LevelSettlement : public ::PipelineCamera::CameraSequence::FrameTwoPointsInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainHorizontalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B10);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B18);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B20);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_mainVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B28);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minSubVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B30);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_IsPlayerOnLeft()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B38);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_subHorizontalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B40);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B48);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B50);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_MainHeight()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B58);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ensureSubVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B60);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B68);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_IsMainOnLeft()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B70);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minAngle()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B78);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_roll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B80);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxSubVerticalOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoPointsInCorePolicy_LevelSettlement_TypeDefinitionIndex)->GetStaticField(0x10B88);
		}
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x40
		::System::Single heightRatio; // 0x48
		::System::Single fieldOfView; // 0x4C
		::System::Single pitch; // 0x50
		::System::Single roll; // 0x54
		::System::Single minAngle; // 0x58
		::System::Single maxAngle; // 0x5C
		::System::Single subHorizontalOffset; // 0x60
		::System::Single mainHorizontalOffset; // 0x64
		::System::Single mainVerticalOffset; // 0x68
		::System::Boolean ensureSubVerticalOffset; // 0x6C
		::System::Byte _padding0[0x3];
		::System::Single minSubVerticalOffset; // 0x70
		::System::Single maxSubVerticalOffset; // 0x74
		::System::Single minPitch; // 0x78
		::System::Single maxPitch; // 0x7C
		::System::Boolean makeContextDependent; // 0x80
		::System::Boolean IsMainOnLeft; // 0x81
		::System::Boolean IsPlayerOnLeft; // 0x82
		::System::Byte _padding1[0x1];
		::System::Single MainHeight; // 0x84
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 IIEHPIBMFLI, ::UnityEngine::Vector3 BPHNBHPHCPM)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, IIEHPIBMFLI, BPHNBHPHCPM);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Single IDJOPAHLGIP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_IDJOPAHLGIP_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single KDDCCIOBCFD(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_KDDCCIOBCFD_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Boolean FIHECEFKDIN(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FIHECEFKDIN_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Single LDNKFBGLEON(::System::Single EGCKEINKEPM, ::System::Single NPHOPECPHLF, ::System::Single DAGBNOIAKKE, ::System::Single KKAMDFNMMJH)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_LDNKFBGLEON_OFFSET))(EGCKEINKEPM, NPHOPECPHLF, DAGBNOIAKKE, KKAMDFNMMJH);
		}

		::System::Single CPBMOADGKLN(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_CPBMOADGKLN_OFFSET))(this, AAOCANGHBDG);
		}

		::PipelineCamera::WorldBasicCameraData HDLFCIOLGGL(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_HDLFCIOLGGL_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single MMMMLOEOJJG(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_MMMMLOEOJJG_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single PJHGOHPIBHC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_PJHGOHPIBHC_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single JNCFDHPFDHC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_JNCFDHPFDHC_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single JLFJHKICAOM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_JLFJHKICAOM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single MFJEEENLADM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_MFJEEENLADM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void AGOPFANLFHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_AGOPFANLFHK_OFFSET))(this);
		}

		::System::Single FODJCHIHBOK(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FODJCHIHBOK_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Boolean INHJKMNCOKL(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_INHJKMNCOKL_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Boolean BJDGPKMBAOF(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_BJDGPKMBAOF_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single COMMGCMMBDJ(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_COMMGCMMBDJ_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single FMNKJIDNKIH(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_FMNKJIDNKIH_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single IEPHBBCGGDO(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMETWOPOINTSINCOREPOLICY_LEVELSETTLEMENT_IEPHBBCGGDO_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
