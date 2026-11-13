#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5935B0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS7_0___GETCURRENTOPTIONCONFIGLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1D593620)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceEffect___c__DisplayClass7_0_TypeDefinitionIndex = 67209;

	class GridFightClaraEnhanceEffect___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCurrentOptionConfigList_b__1(::RPG::Client::GridFightClaraEnhanceOptionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightClaraEnhanceOptionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS7_0___GETCURRENTOPTIONCONFIGLIST_B__1_OFFSET))(this, a1);
		}

	};
}
