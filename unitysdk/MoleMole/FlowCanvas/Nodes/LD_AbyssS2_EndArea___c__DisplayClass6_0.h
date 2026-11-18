#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCLAJEGIIEB;
namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_EndArea; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0___SENDEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x180E5270)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0___SENDEVENT_B__2_OFFSET UNITYSDK_OFFSET(0x180E57A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0___SENDEVENT_G____DELAYSENDACTION_1_OFFSET UNITYSDK_OFFSET(0x180E58E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_EndArea___c__DisplayClass6_0_TypeDefinitionIndex = 53708;

	class LD_AbyssS2_EndArea___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_EndArea* __4__this; // 0x18
		::System::Action* evtAction; // 0x20
		::KCLAJEGIIEB* fightSettle; // 0x28
		::System::Int32 curAreaNo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __SendEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0___SENDEVENT_B__0_OFFSET))(this);
		}

		::System::Void __SendEvent_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0___SENDEVENT_B__2_OFFSET))(this);
		}

		::System::Collections::IEnumerator* __SendEvent_g____DelaySendAction_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0___SENDEVENT_G____DELAYSENDACTION_1_OFFSET))(this);
		}
	};
}
