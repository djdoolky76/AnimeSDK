#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOADBGJENKE.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A091000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A091130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedMoveNextTurnUnit_TypeDefinitionIndex = 66042;

	class LDTurnBasedMoveNextTurnUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT__CTOR_OFFSET))(this);
		}

		::MOADBGJENKE Invoke()
		{
			return ((::MOADBGJENKE(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT_INVOKE_OFFSET))(this);
		}
	};
}
