#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_CONSTRUCTHOLLOWCELL_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C4820)
#define MOLEMOLE_FLOWCANVAS_CONSTRUCTHOLLOWCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x130C48D0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ConstructHollowCell_TypeDefinitionIndex = 73759;

	class ConstructHollowCell
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CONSTRUCTHOLLOWCELL__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell Invoke(::System::Int32 x, ::System::Int32 y)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CONSTRUCTHOLLOWCELL_INVOKE_OFFSET))(this, x, y);
		}
	};
}
