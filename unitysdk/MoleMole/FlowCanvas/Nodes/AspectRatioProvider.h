#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x10D09470)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_DBGONPGOBOH_OFFSET UNITYSDK_OFFSET(0x10D09930)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_FAJBAMPHKNA_OFFSET UNITYSDK_OFFSET(0x10D097F0)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GETDATA_OFFSET UNITYSDK_OFFSET(0x10D09610)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10D09770)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_NPGHONGBGPK_OFFSET UNITYSDK_OFFSET(0x10D09880)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_PPKPKMABEBM_OFFSET UNITYSDK_OFFSET(0x10D09680)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_SETPATH_OFFSET UNITYSDK_OFFSET(0x10D093D0)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D09790)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D09780)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AspectRatioProvider_TypeDefinitionIndex = 58041;

	class AspectRatioProvider
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_AspectRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AspectRatioProvider_TypeDefinitionIndex)->GetStaticField(0xCC30);
		}
		::System::Boolean useFixedAspectRatio; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single fixedAspectRatio; // 0x44
		::System::Single AspectRatio; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& CJBJONJDOLI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_SETPATH_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector KFJNBMIFJNC)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_COLLECTVARIABLE_OFFSET))(this, KFJNBMIFJNC);
		}

		::System::Single GetData(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GETDATA_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void FAJBAMPHKNA(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_FAJBAMPHKNA_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Single NPGHONGBGPK(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_NPGHONGBGPK_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Single PPKPKMABEBM(::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_PPKPKMABEBM_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void DBGONPGOBOH(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_DBGONPGOBOH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
