#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlatBuffers::Config { class AbyssS2SceneTemplate; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE4990)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE4AC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetSceneTemplateByIndex_TypeDefinitionIndex = 49449;

	class LD_AbyssS2_GetSceneTemplateByIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate* Invoke(::System::Int32 qryIndex)
		{
			return ((::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX_INVOKE_OFFSET))(this, qryIndex);
		}
	};
}
