#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KICPDGKGGHO;
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D5E30)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0___SYNCUPDATEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x1D1F01C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass46_0_TypeDefinitionIndex = 68591;

	class PlanetFesModule___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::KICPDGKGGHO* effect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncUpdateBuff_b__0(::RPG::Client::PlanetFesActiveBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0___SYNCUPDATEBUFF_B__0_OFFSET))(this, a1);
		}

	};
}
