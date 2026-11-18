#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlatBuffers::Config { class AbyssS2SceneTemplate; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE30C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE31F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CurrentSceneTemplate_TypeDefinitionIndex = 44610;

	class LD_AbyssS2_CurrentSceneTemplate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate* Invoke()
		{
			return ((::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE_INVOKE_OFFSET))(this);
		}
	};
}
