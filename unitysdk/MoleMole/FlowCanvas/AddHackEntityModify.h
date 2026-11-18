#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole::FlowCanvas { class HackModify; }

#define MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0x11903D00)
#define MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x11903D90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int AddHackEntityModify_TypeDefinitionIndex = 68661;

	class AddHackEntityModify
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::HackModify* a, ::MoleMole::ChessEntityCollection* b)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackModify*, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
