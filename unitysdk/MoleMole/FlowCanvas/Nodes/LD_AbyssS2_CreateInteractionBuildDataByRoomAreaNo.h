#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes { class AbyssS2InteractionBuildData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATABYROOMAREANO_INNERBUILD_OFFSET UNITYSDK_OFFSET(0x13EDB630)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATABYROOMAREANO_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDB540)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATABYROOMAREANO__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDB880)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CreateInteractionBuildDataByRoomAreaNo_TypeDefinitionIndex = 58458;

	class LD_AbyssS2_CreateInteractionBuildDataByRoomAreaNo
	{
	public:
		::System::Int32 _areaIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATABYROOMAREANO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>* Invoke(::System::Int32 areaIndex, ::System::Int32 interactionPool)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATABYROOMAREANO_INVOKE_OFFSET))(this, areaIndex, interactionPool);
		}

		::System::Void InnerBuild(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& container, ::System::Int32 interactionPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEINTERACTIONBUILDDATABYROOMAREANO_INNERBUILD_OFFSET))(this, container, interactionPool);
		}
	};
}
