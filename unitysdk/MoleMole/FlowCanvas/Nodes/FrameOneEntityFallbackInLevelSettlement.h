#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace MoleMole::FlowCanvas::Nodes { class OpenDirectionResolver; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x12447A60)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x12447AD0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_DODEFEADCBM_OFFSET UNITYSDK_OFFSET(0x12449EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_FHAJEACNFBM_OFFSET UNITYSDK_OFFSET(0x124495C0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x12447C80)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x12447D20)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x12447C30)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x12447D10)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GLLAMMKOMHM_OFFSET UNITYSDK_OFFSET(0x12447FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_ILAOOANACGL_OFFSET UNITYSDK_OFFSET(0x12449BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET UNITYSDK_OFFSET(0x12447CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_JACGDHDGDPD_OFFSET UNITYSDK_OFFSET(0x12449720)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_JNCFDHPFDHC_OFFSET UNITYSDK_OFFSET(0x12449B40)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_LDNKFBGLEON_OFFSET UNITYSDK_OFFSET(0x12449F90)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_MHDMFGJGEKB_OFFSET UNITYSDK_OFFSET(0x12449670)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_PEGJKILJFCB_OFFSET UNITYSDK_OFFSET(0x12449510)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x124493A0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x124492D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex = 57785;

	class FrameOneEntityFallbackInLevelSettlement : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x41AF0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xEFF0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xEFF8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF000);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF008);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF010);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xF018);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 EntityId; // 0x20
		::System::Byte _padding1[0x4];
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* PivotLocation; // 0x30
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x38
		::System::Single heightRatio; // 0x40
		::UnityEngine::Vector2 screenOffset; // 0x44
		::System::Byte _padding2[0x4];
		::MoleMole::FlowCanvas::Nodes::OpenDirectionResolver* directionResolver; // 0x50
		::System::Single pitch; // 0x58
		::System::Boolean overridePitch; // 0x5C
		::System::Byte _padding3[0x3];
		::System::Single fieldOfView; // 0x60
		::System::Boolean makeContextDependent; // 0x64
		::System::Boolean makeAlwaysActive; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData& LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET))(this, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}

		::System::UInt32 PEGJKILJFCB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_PEGJKILJFCB_OFFSET))(this, AAOCANGHBDG);
		}

		::Nap::NapECS::EcsWorld* FHAJEACNFBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_FHAJEACNFBM_OFFSET))(this, AAOCANGHBDG);
		}

		::UnityEngine::Vector2 MHDMFGJGEKB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_MHDMFGJGEKB_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Boolean JACGDHDGDPD(::UnityEngine::Vector3 LJCMMEIDBBM, ::UnityEngine::Vector3 ANLFBOEBDLA)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_JACGDHDGDPD_OFFSET))(LJCMMEIDBBM, ANLFBOEBDLA);
		}

		::System::Single JNCFDHPFDHC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_JNCFDHPFDHC_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Single ILAOOANACGL(::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Vector3 JBCNPOHMGPE)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_ILAOOANACGL_OFFSET))(NCCDJLDKFGA, LHDHLAEPFBH, JBCNPOHMGPE);
		}

		::System::Boolean DODEFEADCBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_DODEFEADCBM_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Single LDNKFBGLEON(::System::Single EGCKEINKEPM, ::System::Single NPHOPECPHLF, ::System::Single DAGBNOIAKKE, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_LDNKFBGLEON_OFFSET))(EGCKEINKEPM, NPHOPECPHLF, DAGBNOIAKKE, BKLGNCBNEGM, HNGJFALIMGN);
		}

		static ::PipelineCamera::WorldBasicCameraData GLLAMMKOMHM(::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement* OMPHGGCEIBD, ::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GLLAMMKOMHM_OFFSET))(OMPHGGCEIBD, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}
	};
}
