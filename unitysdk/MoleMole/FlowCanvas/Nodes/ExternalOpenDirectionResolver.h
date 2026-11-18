#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/OpenDirectionResolver.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B4AADD0)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x1B4AB180)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_ENDJOPFOJIA_OFFSET UNITYSDK_OFFSET(0x1B4AB270)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x1B4AB320)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B4AAF70)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B4AB0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B4AAD30)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4AB120)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AB100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExternalOpenDirectionResolver_TypeDefinitionIndex = 41920;

	class ExternalOpenDirectionResolver : public ::MoleMole::FlowCanvas::Nodes::OpenDirectionResolver
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ExternalDirection()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ExternalOpenDirectionResolver_TypeDefinitionIndex)->GetStaticField(0x10BB0);
		}
		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* ExternalDirection; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::UnityEngine::Vector3 GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 GECDKDJLPIG, ::System::Single AKJPGMPBOPA)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, GECDKDJLPIG, AKJPGMPBOPA);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* ENDJOPFOJIA(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::Foundation::ReferenceValue_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_ENDJOPFOJIA_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
