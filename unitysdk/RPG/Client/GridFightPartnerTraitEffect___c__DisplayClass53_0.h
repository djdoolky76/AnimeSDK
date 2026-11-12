#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC1D370)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS53_0___GETCURROLEOPTIONSFROMTEAM_B__0_OFFSET UNITYSDK_OFFSET(0xDC1D7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerTraitEffect___c__DisplayClass53_0_TypeDefinitionIndex = 67264;

	class GridFightPartnerTraitEffect___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::UInt32 partnerTraitID; // 0x10
		::System::UInt32 excludeRoleID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCurRoleOptionsFromTeam_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS53_0___GETCURROLEOPTIONSFROMTEAM_B__0_OFFSET))(this, a1);
		}

	};
}
