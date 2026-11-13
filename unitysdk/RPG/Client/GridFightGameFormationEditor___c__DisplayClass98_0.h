#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormationEditor_EditingSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS98_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D689240)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS98_0___GETEDITINGSPOTLIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x1D68BF80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass98_0_TypeDefinitionIndex = 66196;

	class GridFightGameFormationEditor___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS98_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetEditingSpotLight_b__0(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS98_0___GETEDITINGSPOTLIGHT_B__0_OFFSET))(this, a1);
		}

	};
}
