#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAhaGrowthUpEffect; }
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS68_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D157C60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS68_0__PLAYAHAGROWTHUPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D157C70)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS68_0__PLAYAHAGROWTHUPEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1D157D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass68_0_TypeDefinitionIndex = 65994;

	class GridFightEffectController___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightAhaGrowthUpEffect* main; // 0x20
		::RPG::Client::GridFightAhaGrowthUpEffect* tip; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS68_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAhaGrowthUpEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS68_0__PLAYAHAGROWTHUPEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayAhaGrowthUpEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS68_0__PLAYAHAGROWTHUPEFFECT_B__1_OFFSET))(this);
		}

	};
}
