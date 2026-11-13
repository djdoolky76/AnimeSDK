#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS85_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D688390)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS85_0__ADDSPOTLIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x1D68BDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass85_0_TypeDefinitionIndex = 66192;

	class GridFightGameFormationEditor___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS85_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddSpotLight_b__0(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS85_0__ADDSPOTLIGHT_B__0_OFFSET))(this, a1);
		}

	};
}
