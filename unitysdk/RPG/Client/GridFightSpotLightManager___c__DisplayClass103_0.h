#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNDKIFJLJC;
namespace RPG::Client { class GridFightMoonGameSpotLightTraitEffect; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS103_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC8B430)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS103_0__GET_ISMOONGAMESPOTLIGHTACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xDC8D330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass103_0_TypeDefinitionIndex = 66964;

	class GridFightSpotLightManager___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightMoonGameSpotLightTraitEffect* effect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS103_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsMoonGameSpotLightActive_b__0(::ACNDKIFJLJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNDKIFJLJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS103_0__GET_ISMOONGAMESPOTLIGHTACTIVE_B__0_OFFSET))(this, a1);
		}

	};
}
