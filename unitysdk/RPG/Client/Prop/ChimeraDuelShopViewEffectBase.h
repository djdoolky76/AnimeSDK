#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWEFFECTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0057E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopViewEffectBase_TypeDefinitionIndex = 81097;

	class ChimeraDuelShopViewEffectBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWEFFECTBASE_CTOR_OFFSET))(this);
		}

	};
}
