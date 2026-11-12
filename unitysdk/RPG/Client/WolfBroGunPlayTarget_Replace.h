#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_REPLACE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF37970)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Replace_TypeDefinitionIndex = 70683;

	class WolfBroGunPlayTarget_Replace : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_REPLACE_CTOR_OFFSET))(this);
		}

	};
}
