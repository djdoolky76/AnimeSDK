#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/CameraRotationBasedOnEntityPolicy.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/CameraRotationBasedOnEntityPolicy_ByEulerOffset_GPCJANPFLMH.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x131DA1B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x131DA540)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x131DA630)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_FKGNIHPONNB_OFFSET UNITYSDK_OFFSET(0x131DA6C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GETDATA_OFFSET UNITYSDK_OFFSET(0x131DA360)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x131DA350)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_SETPATH_OFFSET UNITYSDK_OFFSET(0x131DA110)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x131DA490)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x131DA470)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex = 78472;

	class CameraRotationBasedOnEntityPolicy_ByEulerOffset : public ::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_rollOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex)->GetStaticField(0x10AF0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitchOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex)->GetStaticField(0x10AF8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_yawOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraRotationBasedOnEntityPolicy_ByEulerOffset_TypeDefinitionIndex)->GetStaticField(0x10B00);
		}
		::System::Single pitchOffset; // 0x40
		::System::Single yawOffset; // 0x44
		::System::Single rollOffset; // 0x48
		::System::Boolean flipForward; // 0x4C
		::System::Boolean makeContextDependent; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, BKLGNCBNEGM, HNGJFALIMGN);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset_GPCJANPFLMH FKGNIHPONNB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset_GPCJANPFLMH(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_FKGNIHPONNB_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
