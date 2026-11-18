#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSFIXHOLLOWCELLLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x16229BF0)
#define MOLEMOLE_FLOWCANVAS_CHESSFIXHOLLOWCELLLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16229D30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessFixHollowCellList_TypeDefinitionIndex = 81664;

	class ChessFixHollowCellList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFIXHOLLOWCELLLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFIXHOLLOWCELLLIST_INVOKE_OFFSET))(this, a);
		}
	};
}
