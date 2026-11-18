#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/OpenDirectionSelector.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x16244240)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x162449B0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x16244C60)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GETDATA_OFFSET UNITYSDK_OFFSET(0x162443E0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x162448D0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GONEHDNBDGP_OFFSET UNITYSDK_OFFSET(0x16244AA0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_HJLHOBBKCDN_OFFSET UNITYSDK_OFFSET(0x16244CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_IOEDCOAOCGC_OFFSET UNITYSDK_OFFSET(0x16244B50)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_SETPATH_OFFSET UNITYSDK_OFFSET(0x162441A0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x16244900)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x162448E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionSelector_AroundDirection_TypeDefinitionIndex = 64990;

	class OpenDirectionSelector_AroundDirection : public ::MoleMole::FlowCanvas::Nodes::OpenDirectionSelector
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_directionOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionSelector_AroundDirection_TypeDefinitionIndex)->GetStaticField(0xE5D0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_projectOnXZPlane()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionSelector_AroundDirection_TypeDefinitionIndex)->GetStaticField(0xE5D8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_direction()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionSelector_AroundDirection_TypeDefinitionIndex)->GetStaticField(0xE5E0);
		}
		::UnityEngine::Vector3 direction; // 0x40
		::System::Boolean projectOnXZPlane; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single directionOffset; // 0x50
		::System::Boolean makeContextDependent; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Vector3 HLMKGMMHPNB, ::System::Single NCCDJLDKFGA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, LHDHLAEPFBH, HLMKGMMHPNB, NCCDJLDKFGA);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean GONEHDNBDGP(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GONEHDNBDGP_OFFSET))(this, AAOCANGHBDG);
		}

		::UnityEngine::Vector3 IOEDCOAOCGC(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_IOEDCOAOCGC_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single HJLHOBBKCDN(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_HJLHOBBKCDN_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
