#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas { class HackModify; }

#define MOLEMOLE_FLOWCANVAS_HACKSHARDEDINFOUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465A170)
#define MOLEMOLE_FLOWCANVAS_HACKSHARDEDINFOUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465A200)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackShardedInfoUpdate_TypeDefinitionIndex = 47068;

	class HackShardedInfoUpdate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKSHARDEDINFOUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::HackModify* a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackModify*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKSHARDEDINFOUPDATE_INVOKE_OFFSET))(this, a, b, c);
		}
	};
}
