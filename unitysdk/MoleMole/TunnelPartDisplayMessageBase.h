#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_TUNNELPARTDISPLAYMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7ECB0)

namespace MoleMole
{
	inline static constexpr unsigned int TunnelPartDisplayMessageBase_TypeDefinitionIndex = 77509;

	class TunnelPartDisplayMessageBase : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor(::FAKODLEPJOA matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_TUNNELPARTDISPLAYMESSAGEBASE__CTOR_OFFSET))(this, matchPage);
		}
	};
}
