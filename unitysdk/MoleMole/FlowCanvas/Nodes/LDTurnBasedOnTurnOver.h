#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

class AAAPLPDBHPL;
class ENGKPGFGGLM;
namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1623CC10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1623CD80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x1623CE30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1623CB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1623CF20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1623CF60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1623CF70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedOnTurnOver_TypeDefinitionIndex = 60562;

	class LDTurnBasedOnTurnOver : public ::FlowCanvas::FlowNode
	{
	public:
		::AAAPLPDBHPL* _redirector; // 0xA8
		::FlowCanvas::FlowOutput* _onTurnOver; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnTurnOver(::ENGKPGFGGLM* evt, ::MoleMole::Battle::Entity* _)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONTURNOVER_OFFSET))(this, evt, _);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
