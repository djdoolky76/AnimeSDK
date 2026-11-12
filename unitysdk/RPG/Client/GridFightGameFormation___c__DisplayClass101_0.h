#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS101_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB0CBD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS101_0__GETRECOMMENDSPOTLIGHTS_B__0_OFFSET UNITYSDK_OFFSET(0xDB0D3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c__DisplayClass101_0_TypeDefinitionIndex = 66217;

	class GridFightGameFormation___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS101_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecommendSpotLights_b__0(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS101_0__GETRECOMMENDSPOTLIGHTS_B__0_OFFSET))(this, a1);
		}

	};
}
