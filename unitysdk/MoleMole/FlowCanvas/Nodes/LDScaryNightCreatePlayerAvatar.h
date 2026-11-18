#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR_PROCESS_OFFSET UNITYSDK_OFFSET(0x139DE230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x139DE0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x139DF1E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x139DF220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x139DF270)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScaryNightCreatePlayerAvatar_TypeDefinitionIndex = 53770;

	class LDScaryNightCreatePlayerAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::Battle::Entity* _cachedEntity; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* _createdEntity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _bornPoint; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _robotID; // 0xC0
		::FlowCanvas::FlowOutput* _flowOut; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Process()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR_PROCESS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__4_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTCREATEPLAYERAVATAR__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
