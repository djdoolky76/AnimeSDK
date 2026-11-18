#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0870E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0872E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAbyssDungeonRankThreshold_TypeDefinitionIndex = 68474;

	class LDGetAbyssDungeonRankThreshold
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Level::RatingType rank)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONRANKTHRESHOLD_INVOKE_OFFSET))(this, rank);
		}
	};
}
