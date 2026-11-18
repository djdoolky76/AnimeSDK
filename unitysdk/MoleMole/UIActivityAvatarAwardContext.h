#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYAVATARAWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C107560)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAvatarAwardContext_TypeDefinitionIndex = 53932;

	class UIActivityAvatarAwardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* componentActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAVATARAWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
