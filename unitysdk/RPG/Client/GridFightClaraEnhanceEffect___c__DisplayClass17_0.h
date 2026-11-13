#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5934D0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS17_0__GET_HASULTRA_B__0_OFFSET UNITYSDK_OFFSET(0x1D5935C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceEffect___c__DisplayClass17_0_TypeDefinitionIndex = 67206;

	class GridFightClaraEnhanceEffect___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 enhanceId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasUltra_b__0(::RPG::Client::GridFightClaraEnhanceOptionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightClaraEnhanceOptionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___C__DISPLAYCLASS17_0__GET_HASULTRA_B__0_OFFSET))(this, a1);
		}

	};
}
