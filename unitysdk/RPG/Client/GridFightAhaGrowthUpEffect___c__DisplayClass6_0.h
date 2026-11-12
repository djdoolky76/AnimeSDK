#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAhaGrowthUpEffect; }

#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5ADB0)
#define RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT___C__DISPLAYCLASS6_0___OPENSPRANKNUMEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDA5AEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAhaGrowthUpEffect___c__DisplayClass6_0_TypeDefinitionIndex = 65959;

	class GridFightAhaGrowthUpEffect___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightAhaGrowthUpEffect* numEffect; // 0x10
		::RPG::Client::GridFightAhaGrowthUpEffect* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void __OpenSPRankNumEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHAGROWTHUPEFFECT___C__DISPLAYCLASS6_0___OPENSPRANKNUMEFFECT_B__0_OFFSET))(this);
		}

	};
}
