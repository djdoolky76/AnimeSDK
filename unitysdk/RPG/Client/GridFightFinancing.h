#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTFINANCING_CTOR_OFFSET UNITYSDK_OFFSET(0xD12E7D0)
#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xD12E830)
#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD115AF0)
#define RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET UNITYSDK_OFFSET(0xD12E7E0)

namespace RPG::Client
{
	class GridFightFinancing : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET))(this);
		}

	};
}
