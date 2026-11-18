#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_INTERACTIONSPECIALPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x11926180)

namespace MoleMole
{
	inline static constexpr unsigned int InteractionSpecialParamBase_TypeDefinitionIndex = 39908;

	class InteractionSpecialParamBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONSPECIALPARAMBASE__CTOR_OFFSET))(this);
		}
	};
}
