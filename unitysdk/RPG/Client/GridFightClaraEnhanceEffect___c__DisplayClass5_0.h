#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA93E40)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS5_0__GETOBTAINEDGROUPS_B__0_OFFSET UNITYSDK_OFFSET(0xDA94B30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceEffect___c__DisplayClass5_0_TypeDefinitionIndex = 67207;

	class GridFightClaraEnhanceEffect___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 enhanceId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetObtainedGroups_b__0(::RPG::Client::GridFightClaraEnhanceOptionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightClaraEnhanceOptionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS5_0__GETOBTAINEDGROUPS_B__0_OFFSET))(this, a1);
		}

	};
}
