#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FrameOnePointInFinalPolicy; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x18B8C530)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x18B8C5A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_DODEFEADCBM_OFFSET UNITYSDK_OFFSET(0x18B8D020)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_FHAJEACNFBM_OFFSET UNITYSDK_OFFSET(0x18B8D0D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x18B8C750)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B8C7F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x18B8C700)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x18B8C7E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GLLAMMKOMHM_OFFSET UNITYSDK_OFFSET(0x18B8CAE0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x18B8C7A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_PEGJKILJFCB_OFFSET UNITYSDK_OFFSET(0x18B8D180)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8CF10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8CE70)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FrameOneEntityInFinalSpace_TypeDefinitionIndex = 92423;

	class FrameOneEntityInFinalSpace : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x46B90);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10510);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10518);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10520);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10528);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 EntityId; // 0x20
		::System::Byte _padding1[0x4];
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* entityLocation; // 0x30
		::PipelineCamera::CameraSequence::FrameOnePointInFinalPolicy* framePolicy; // 0x38
		::System::Boolean makeContextDependent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData& LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}

		::System::Boolean DODEFEADCBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_DODEFEADCBM_OFFSET))(this, AAOCANGHBDG);
		}

		::Nap::NapECS::EcsWorld* FHAJEACNFBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_FHAJEACNFBM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::UInt32 PEGJKILJFCB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_PEGJKILJFCB_OFFSET))(this, AAOCANGHBDG);
		}

		static ::PipelineCamera::WorldBasicCameraData GLLAMMKOMHM(::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace* OMPHGGCEIBD, ::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData JFLDAALEMGB, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GLLAMMKOMHM_OFFSET))(OMPHGGCEIBD, NMJENEBEBAB, JFLDAALEMGB, AAOCANGHBDG);
		}
	};
}
