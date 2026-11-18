#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14B12D20)
#define MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x14B12CE0)

namespace MoleMole
{
	inline static constexpr unsigned int OnPlayerAccessoryChangeMsg_TypeDefinitionIndex = 60103;

	class OnPlayerAccessoryChangeMsg : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor(::FAKODLEPJOA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG__CTOR_OFFSET))(this, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG_ONPROCESS_OFFSET))(this);
		}
	};
}
