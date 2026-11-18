#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/OpenDirectionResolver.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace MoleMole::FlowCanvas::Nodes { class OpenDirectionSelector; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x13EDFB70)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x13EE03F0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_DDNIBCCDHCE_OFFSET UNITYSDK_OFFSET(0x13EE0340)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x13EE02B0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x13EDFD10)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x13EE0220)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_KMHOKFENABH_OFFSET UNITYSDK_OFFSET(0x13EE04E0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_SETPATH_OFFSET UNITYSDK_OFFSET(0x13EDFAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EE0250)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE0230)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionResolver_MaxSample_TypeDefinitionIndex = 60850;

	class OpenDirectionResolver_MaxSample : public ::MoleMole::FlowCanvas::Nodes::OpenDirectionResolver
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_SampleResult()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionResolver_MaxSample_TypeDefinitionIndex)->GetStaticField(0x114F0);
		}
		::MoleMole::FlowCanvas::Nodes::OpenDirectionSelector* selector; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SampleResult; // 0x48
		::System::Boolean randomSampleOffset; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::UnityEngine::Vector3 GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 LHDHLAEPFBH, ::System::Single NCCDJLDKFGA)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, LHDHLAEPFBH, NCCDJLDKFGA);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDNIBCCDHCE(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_DDNIBCCDHCE_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single KMHOKFENABH(::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 LHDHLAEPFBH, ::System::Single NCCDJLDKFGA)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_KMHOKFENABH_OFFSET))(this, JBCNPOHMGPE, FNIOPKPHDEH, AAOCANGHBDG, LHDHLAEPFBH, NCCDJLDKFGA);
		}
	};
}
