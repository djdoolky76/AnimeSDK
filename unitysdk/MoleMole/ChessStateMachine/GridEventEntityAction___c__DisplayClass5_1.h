#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MPKBDIJDMAP;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19089A50)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__RUN_B__4_OFFSET UNITYSDK_OFFSET(0x19089A60)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction___c__DisplayClass5_1_TypeDefinitionIndex = 54131;

	template <typename T>
	class GridEventEntityAction___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__4(::MPKBDIJDMAP* player)
		{
			return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___C__DISPLAYCLASS5_1__RUN_B__4_OFFSET))(this, player);
		}
	};
}
