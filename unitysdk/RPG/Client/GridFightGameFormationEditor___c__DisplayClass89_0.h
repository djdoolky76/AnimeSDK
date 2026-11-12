#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS89_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB14F80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS89_0__ISSPOTLIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xDB18780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass89_0_TypeDefinitionIndex = 66194;

	class GridFightGameFormationEditor___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS89_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsSpotLight_b__0(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS89_0__ISSPOTLIGHT_B__0_OFFSET))(this, a1);
		}

	};
}
