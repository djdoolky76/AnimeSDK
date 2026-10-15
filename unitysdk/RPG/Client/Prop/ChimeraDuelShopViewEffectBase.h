#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWEFFECTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC731D0)

namespace RPG::Client::Prop
{
	class ChimeraDuelShopViewEffectBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWEFFECTBASE_CTOR_OFFSET))(this);
		}

	};
}
