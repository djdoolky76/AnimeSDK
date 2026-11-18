#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace MoleMole::FlowCanvas::Nodes { class LDTurnBasedOnTurnOver; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14308660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__ONTURNOVER_B__0_OFFSET UNITYSDK_OFFSET(0x14308670)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedOnTurnOver___c__DisplayClass5_0_TypeDefinitionIndex = 60563;

	class LDTurnBasedOnTurnOver___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::ENGKPGFGGLM* evt; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDTurnBasedOnTurnOver* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTurnOver_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__ONTURNOVER_B__0_OFFSET))(this);
		}
	};
}
