#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDCheckPoint.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_ISFAILBACK_OFFSET UNITYSDK_OFFSET(0x139D8110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_PARSEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x139D8150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x139D82D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_ISFAILBACK_OFFSET UNITYSDK_OFFSET(0x139D8350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_PARSEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x139D83E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFailBackCheckPoint_TypeDefinitionIndex = 60936;

	class LDFailBackCheckPoint : public ::MoleMole::FlowCanvas::Nodes::LDCheckPoint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsFailBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_ISFAILBACK_OFFSET))(this);
		}

		::System::Boolean ParserExpression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_PARSEREXPRESSION_OFFSET))(this);
		}

		::System::Boolean __base_IsFailBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_ISFAILBACK_OFFSET))(this);
		}

		::System::Boolean __base_ParserExpression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_PARSEREXPRESSION_OFFSET))(this);
		}
	};
}
