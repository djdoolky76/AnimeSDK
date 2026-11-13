#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF24EE0)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT___C__DISPLAYCLASS12_0__SHOULDSHOWROLECARDBONUS_B__0_OFFSET UNITYSDK_OFFSET(0x1DF25420)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPhanionUniqueTraitEffect___c__DisplayClass12_0_TypeDefinitionIndex = 67224;

	class GridFightPhanionUniqueTraitEffect___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ShouldShowRoleCardBonus_b__0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT___C__DISPLAYCLASS12_0__SHOULDSHOWROLECARDBONUS_B__0_OFFSET))(this, a1);
		}

	};
}
