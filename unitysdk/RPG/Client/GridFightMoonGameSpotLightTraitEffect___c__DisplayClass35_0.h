#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0AA10)
#define RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS35_0__GETSHOWMEMBERUIDS_B__1_OFFSET UNITYSDK_OFFSET(0xDC0AA20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMoonGameSpotLightTraitEffect___c__DisplayClass35_0_TypeDefinitionIndex = 67216;

	class GridFightMoonGameSpotLightTraitEffect___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMemberUIDs_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMOONGAMESPOTLIGHTTRAITEFFECT___C__DISPLAYCLASS35_0__GETSHOWMEMBERUIDS_B__1_OFFSET))(this, a1);
		}

	};
}
