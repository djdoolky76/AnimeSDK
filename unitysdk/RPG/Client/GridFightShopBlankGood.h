#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
class HDEIAANGMDB;

#define RPG_CLIENT_GRIDFIGHTSHOPBLANKGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC7B440)
#define RPG_CLIENT_GRIDFIGHTSHOPBLANKGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0xDC7B460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopBlankGood_TypeDefinitionIndex = 66953;

	class GridFightShopBlankGood : public ::RPG::Client::GridFightShopGood
	{
	public:
		::System::Void _ctor(::HDEIAANGMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBLANKGOOD_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPBLANKGOOD_GET_GOODTYPE_OFFSET))(this);
		}

	};
}
