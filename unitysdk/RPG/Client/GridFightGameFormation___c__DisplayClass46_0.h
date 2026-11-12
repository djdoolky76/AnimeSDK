#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB0AD90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS46_0___IMPORTSPOTLIGHTRECOMMENDS_B__0_OFFSET UNITYSDK_OFFSET(0xDB0D3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormation___c__DisplayClass46_0_TypeDefinitionIndex = 66218;

	class GridFightGameFormation___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSpotLightRecommend* recommend; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __ImportSpotLightRecommends_b__0(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATION___C__DISPLAYCLASS46_0___IMPORTSPOTLIGHTRECOMMENDS_B__0_OFFSET))(this, a1);
		}

	};
}
