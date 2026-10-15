#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTFINANCING_CTOR_OFFSET UNITYSDK_OFFSET(0xD1264F0)
#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xD126550)
#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD10D810)
#define RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET UNITYSDK_OFFSET(0xD126500)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFinancing_TypeDefinitionIndex = 65036;

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
