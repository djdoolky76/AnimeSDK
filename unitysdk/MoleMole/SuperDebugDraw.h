#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/CommandBuilder.h"

#define MOLEMOLE_SUPERDEBUGDRAW_GET_INGAME_OFFSET UNITYSDK_OFFSET(0x20072A10)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebugDraw_TypeDefinitionIndex = 37207;

	class SuperDebugDraw : public ::System::Object
	{
	public:
		static ::MoleMole::CommandBuilder& get_ingame()
		{
			return ((::MoleMole::CommandBuilder&(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUGDRAW_GET_INGAME_OFFSET))();
		}
	};
}
