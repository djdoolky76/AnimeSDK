#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBCAOOBFHEA.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleItemBase.h"

#define RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCEE600)
#define RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_GET_COORD_OFFSET UNITYSDK_OFFSET(0xDCEE5B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HexPuzzleItemBase_TypeDefinitionIndex = 78612;

	class HexPuzzleItemBase : public ::RPG::Client::Prop::InteractPuzzleItemBase
	{
	public:
		::NBCAOOBFHEA HOGCHABAPFK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_CTOR_OFFSET))(this);
		}

		::NBCAOOBFHEA get_Coord()
		{
			return ((::NBCAOOBFHEA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEITEMBASE_GET_COORD_OFFSET))(this);
		}

	};
}
