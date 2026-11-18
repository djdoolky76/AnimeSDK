#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FrameMultiplePointsInCorePolicy; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0xFFCADE0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_CCIGFEBDAIB_OFFSET UNITYSDK_OFFSET(0xFFCBF10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_CIDFCBLFJAF_OFFSET UNITYSDK_OFFSET(0xFFCBFC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xFFCAE50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_DODEFEADCBM_OFFSET UNITYSDK_OFFSET(0xFFCBE60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_FHAJEACNFBM_OFFSET UNITYSDK_OFFSET(0xFFCC070)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0xFFCB000)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xFFCB0A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0xFFCAFB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xFFCB090)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GLLAMMKOMHM_OFFSET UNITYSDK_OFFSET(0xFFCB3C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_ISLOOP_OFFSET UNITYSDK_OFFSET(0xFFCB050)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFCBD50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCBCA0)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex = 72008;

	class FrameMultipleEntitiesInCoreSpace : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_SubEntityIDs()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x12870);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x12878);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_MainEntityID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x12880);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x12888);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x12890);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::Boolean makeContextDependent; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 MainEntityID; // 0x20
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::UInt32>* SubEntityIDs; // 0x28
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x30
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* mainLocationPolicy; // 0x38
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* subLocationPolicy; // 0x40
		::PipelineCamera::CameraSequence::FrameMultiplePointsInCorePolicy* framePolicy; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData& LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}

		::System::Boolean DODEFEADCBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_DODEFEADCBM_OFFSET))(this, AAOCANGHBDG);
		}

		::Il2CppArray<::System::UInt32>* CCIGFEBDAIB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_CCIGFEBDAIB_OFFSET))(this, AAOCANGHBDG);
		}

		static ::PipelineCamera::WorldBasicCameraData GLLAMMKOMHM(::MoleMole::Config::CameraSequence::FrameMultipleEntitiesInCoreSpace* OMPHGGCEIBD, ::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData JFLDAALEMGB, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Config::CameraSequence::FrameMultipleEntitiesInCoreSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GLLAMMKOMHM_OFFSET))(OMPHGGCEIBD, NMJENEBEBAB, JFLDAALEMGB, AAOCANGHBDG);
		}

		::System::UInt32 CIDFCBLFJAF(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_CIDFCBLFJAF_OFFSET))(this, AAOCANGHBDG);
		}

		::Nap::NapECS::EcsWorld* FHAJEACNFBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_FHAJEACNFBM_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
