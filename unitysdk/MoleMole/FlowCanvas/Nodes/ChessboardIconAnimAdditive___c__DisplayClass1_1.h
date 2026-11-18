#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MPKBDIJDMAP;
class PNJDGHBEMLK;

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E29E0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x1A8E29F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimAdditive___c__DisplayClass1_1_TypeDefinitionIndex = 46070;

	template <typename T>
	class ChessboardIconAnimAdditive___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::PNJDGHBEMLK* chessPieceProxy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::MPKBDIJDMAP* player)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_1__INVOKE_B__0_OFFSET))(this, player);
		}
	};
}
