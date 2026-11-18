#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_CHECKISINBOUND_OFFSET UNITYSDK_OFFSET(0x180D1840)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D1770)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x180D18B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCheckInBound_TypeDefinitionIndex = 53875;

	class ChessboardCheckInBound
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* bound, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_INVOKE_OFFSET))(this, bound, cell);
		}

		static ::System::Boolean CheckIsInBound(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* bound, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_CHECKISINBOUND_OFFSET))(bound, cell);
		}
	};
}
