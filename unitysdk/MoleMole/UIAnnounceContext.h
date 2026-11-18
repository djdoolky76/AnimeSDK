#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HOHPKEKHBIN;

#define MOLEMOLE_UIANNOUNCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DD1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnnounceContext_TypeDefinitionIndex = 46749;

	class UIAnnounceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HOHPKEKHBIN* uiAnnounce; // 0x28

		::System::Void _ctor(::HOHPKEKHBIN* uiAnnounce)
		{
			return ((::System::Void(*)(::PVOID, ::HOHPKEKHBIN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCECONTEXT__CTOR_OFFSET))(this, uiAnnounce);
		}
	};
}
