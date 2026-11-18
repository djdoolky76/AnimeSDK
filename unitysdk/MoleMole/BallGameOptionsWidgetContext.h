#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;
namespace System { class String; }

#define MOLEMOLE_BALLGAMEOPTIONSWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6952F0)

namespace MoleMole
{
	inline static constexpr unsigned int BallGameOptionsWidgetContext_TypeDefinitionIndex = 95010;

	class BallGameOptionsWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::String* Icon; // 0x30
		::System::String* Description; // 0x38
		::KBDGKAJPALP* world; // 0x40
		::System::Int32 EventID; // 0x48
		::System::Int32 Index; // 0x4C
		::System::Int32 EventType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BALLGAMEOPTIONSWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
