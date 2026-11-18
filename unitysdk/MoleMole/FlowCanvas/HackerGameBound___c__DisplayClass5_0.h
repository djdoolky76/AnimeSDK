#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::FlowCanvas { class HackerGameBound; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12446580)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x12446590)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x124465B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x124465D0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x124465F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__4_OFFSET UNITYSDK_OFFSET(0x12446610)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameBound___c__DisplayClass5_0_TypeDefinitionIndex = 76299;

	class HackerGameBound___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0x10
		::MoleMole::FlowCanvas::HackerGameBound* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__2_OFFSET))(this);
		}

		::System::Int32 _OnRegisterPorts_b__3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__3_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__4(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND___C__DISPLAYCLASS5_0__ONREGISTERPORTS_B__4_OFFSET))(this, f);
		}
	};
}
