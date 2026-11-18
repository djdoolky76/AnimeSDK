#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS_INVOKE_OFFSET UNITYSDK_OFFSET(0x13562930)
#define MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x135629E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int CheckChessEntityPos_TypeDefinitionIndex = 82990;

	class CheckChessEntityPos
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::ChessEntity* entity, ::System::Boolean checkX, ::System::Boolean checkY, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS_INVOKE_OFFSET))(this, entity, checkX, checkY, x, y);
		}
	};
}
