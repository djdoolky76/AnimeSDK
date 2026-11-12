#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormationEditor_EditingSpotLightRecommend; }
namespace RPG::Client { class GridFightSpotLightRecommend; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB14E70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0___REMOVESPOTLIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xDB18720)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0___REMOVESPOTLIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xDB18740)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0___REMOVESPOTLIGHT_B__2_OFFSET UNITYSDK_OFFSET(0xDB18760)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass88_0_TypeDefinitionIndex = 66193;

	class GridFightGameFormationEditor___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveSpotLight_b__0(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0___REMOVESPOTLIGHT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __RemoveSpotLight_b__1(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0___REMOVESPOTLIGHT_B__1_OFFSET))(this, a1);
		}

		::System::Boolean __RemoveSpotLight_b__2(::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditingSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS88_0___REMOVESPOTLIGHT_B__2_OFFSET))(this, a1);
		}

	};
}
