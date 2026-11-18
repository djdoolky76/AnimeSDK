#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1430E790)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1430E800)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_FHAJEACNFBM_OFFSET UNITYSDK_OFFSET(0x1430F2B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1430E9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1430EA50)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1430E960)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1430EA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GLLAMMKOMHM_OFFSET UNITYSDK_OFFSET(0x1430F410)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1430EA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_JACGDHDGDPD_OFFSET UNITYSDK_OFFSET(0x1430EE80)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHDMFGJGEKB_OFFSET UNITYSDK_OFFSET(0x1430F200)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MMBLMDNGHNB_OFFSET UNITYSDK_OFFSET(0x1430F360)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_PEGJKILJFCB_OFFSET UNITYSDK_OFFSET(0x1430EDD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1430EC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1430EBD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex = 72718;

	class LastPhaseFallbackInLevelSettlement : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x4F890);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12DF0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12DF8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12E00);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12E08);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OpenDirection()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12E10);
		}
		::System::Single playLength; // 0x18
		::System::UInt32 EntityId; // 0x1C
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x20
		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* OpenDirection; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* PivotLocation; // 0x30
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x38
		::UnityEngine::Vector2 screenOffset; // 0x40
		::System::Boolean makeContextDependent; // 0x48
		::System::Boolean makeAlwaysActive; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData& LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET))(this, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}

		::System::UInt32 PEGJKILJFCB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_PEGJKILJFCB_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Boolean JACGDHDGDPD(::UnityEngine::Vector3 LJCMMEIDBBM, ::UnityEngine::Vector3 ANLFBOEBDLA, ::System::Single& KMKBJKOEBMF)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_JACGDHDGDPD_OFFSET))(LJCMMEIDBBM, ANLFBOEBDLA, KMKBJKOEBMF);
		}

		::UnityEngine::Vector2 MHDMFGJGEKB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHDMFGJGEKB_OFFSET))(this, AAOCANGHBDG);
		}

		::Nap::NapECS::EcsWorld* FHAJEACNFBM(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_FHAJEACNFBM_OFFSET))(this, AAOCANGHBDG);
		}

		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* MMBLMDNGHNB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Foundation::ReferenceValue_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MMBLMDNGHNB_OFFSET))(this, AAOCANGHBDG);
		}

		static ::PipelineCamera::WorldBasicCameraData GLLAMMKOMHM(::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement* OMPHGGCEIBD, ::System::Single NMJENEBEBAB, ::PipelineCamera::WorldBasicCameraData LJBPECKCCEA, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GLLAMMKOMHM_OFFSET))(OMPHGGCEIBD, NMJENEBEBAB, LJBPECKCCEA, AAOCANGHBDG);
		}
	};
}
