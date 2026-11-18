#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/CameraRotationBasedOnEntityPolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x18B8DDA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x18B8E890)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x18B8EC10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B8DF40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x18B8E5B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_HDLFCIOLGGL_OFFSET UNITYSDK_OFFSET(0x18B8EA40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_IEPHBBCGGDO_OFFSET UNITYSDK_OFFSET(0x18B8E980)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_KHDHDAGABMA_OFFSET UNITYSDK_OFFSET(0x18B8E160)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_KIDNAEDFDFH_OFFSET UNITYSDK_OFFSET(0x18B8E7D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_LPJNBGHHMPM_OFFSET UNITYSDK_OFFSET(0x18B8E6F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_MFJEEENLADM_OFFSET UNITYSDK_OFFSET(0x18B8EB50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_SETPATH_OFFSET UNITYSDK_OFFSET(0x18B8DD00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8E5E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8E5C0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex = 65723;

	class CameraRotationBasedOnEntityPolicy_ByLast : public ::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10540);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10548);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_roll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10550);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_yaw()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10558);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityRotation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByLast_TypeDefinitionIndex)->GetStaticField(0x10560);
		}
		::System::Boolean overridePitch; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single pitch; // 0x44
		::System::Boolean overrideYaw; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single yaw; // 0x4C
		::System::Boolean overrideRoll; // 0x50
		::System::Byte _padding2[0x3];
		::System::Single roll; // 0x54
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x58
		::System::Boolean useRelativeYaw; // 0x84
		::System::Byte _padding3[0x3];
		::UnityEngine::Quaternion EntityRotation; // 0x88
		::System::Boolean makeContextDependent; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::UnityEngine::Quaternion GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, BKLGNCBNEGM, HNGJFALIMGN);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::UnityEngine::Quaternion LPJNBGHHMPM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_LPJNBGHHMPM_OFFSET))(this, AAOCANGHBDG);
		}

		::UnityEngine::Vector3 KHDHDAGABMA(::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_KHDHDAGABMA_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single KIDNAEDFDFH(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_KIDNAEDFDFH_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single IEPHBBCGGDO(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_IEPHBBCGGDO_OFFSET))(this, AAOCANGHBDG);
		}

		::PipelineCamera::WorldBasicCameraData HDLFCIOLGGL(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_HDLFCIOLGGL_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single MFJEEENLADM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_MFJEEENLADM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYLAST_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
