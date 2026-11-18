#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/EntityLocationPolicy.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xFFCC1C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0xFFCC5F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0xFFCC560)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GETDATA_OFFSET UNITYSDK_OFFSET(0xFFCC360)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xFFCC4D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_HALIPGLFHAA_OFFSET UNITYSDK_OFFSET(0xFFCC6E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_SETPATH_OFFSET UNITYSDK_OFFSET(0xFFCC120)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFCC500)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCC4E0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int EntityLocationPolicy_External_TypeDefinitionIndex = 67240;

	class EntityLocationPolicy_External : public ::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_Location()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationPolicy_External_TypeDefinitionIndex)->GetStaticField(0x128A0);
		}
		::UnityEngine::Vector3 Location; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::UnityEngine::Vector3 GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::System::UInt32 GECDKDJLPIG, ::Nap::NapECS::EcsWorld* AKJPGMPBOPA)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, GECDKDJLPIG, AKJPGMPBOPA);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Vector3 HALIPGLFHAA(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_HALIPGLFHAA_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
