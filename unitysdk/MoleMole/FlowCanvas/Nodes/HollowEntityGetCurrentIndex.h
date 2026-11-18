#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x162304A0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16230740)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCurrentIndex_TypeDefinitionIndex = 46263;

	class HollowEntityGetCurrentIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::UInt32 entityRuntimeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX_INVOKE_OFFSET))(this, entityRuntimeID);
		}
	};
}
