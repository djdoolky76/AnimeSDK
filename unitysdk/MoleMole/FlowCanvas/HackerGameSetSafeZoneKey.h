#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465A5B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1465A700)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetSafeZoneKey_TypeDefinitionIndex = 43450;

	class HackerGameSetSafeZoneKey
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* safeZoneKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETSAFEZONEKEY_INVOKE_OFFSET))(this, safeZoneKey);
		}
	};
}
