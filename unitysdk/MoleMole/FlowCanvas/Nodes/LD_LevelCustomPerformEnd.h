#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE6590)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE6680)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LevelCustomPerformEnd_TypeDefinitionIndex = 82071;

	class LD_LevelCustomPerformEnd
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELCUSTOMPERFORMEND_INVOKE_OFFSET))(this, tag);
		}
	};
}
