#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D3010)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS31_0__ISAVATARINCOMEUP_B__0_OFFSET UNITYSDK_OFFSET(0x1D1EFEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass31_0_TypeDefinitionIndex = 68587;

	class PlanetFesModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAvatarIncomeUp_b__0(::RPG::Client::PlanetFesActiveBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS31_0__ISAVATARINCOMEUP_B__0_OFFSET))(this, a1);
		}

	};
}
