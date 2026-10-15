#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateValueEntry.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_COLORSTATEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0xCB9C830)

namespace RPG::Client
{
	class ColorStateValue : public ::RPG::Client::StateValueEntry
	{
	public:
		::UnityEngine::Color V; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLORSTATEVALUE_CTOR_OFFSET))(this);
		}

	};
}
