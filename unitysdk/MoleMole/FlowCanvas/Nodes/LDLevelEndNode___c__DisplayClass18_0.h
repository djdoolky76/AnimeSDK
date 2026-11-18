#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJHKDJEGJOG;
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1040C2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_0___TRYPLAYDYNAMICENDPERFORMS_B__1_OFFSET UNITYSDK_OFFSET(0x1040C2D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass18_0_TypeDefinitionIndex = 43830;

	class LDLevelEndNode___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::System::Action* __9__1; // 0x18
		::PJHKDJEGJOG* hgc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryPlayDynamicEndPerforms_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_0___TRYPLAYDYNAMICENDPERFORMS_B__1_OFFSET))(this);
		}
	};
}
