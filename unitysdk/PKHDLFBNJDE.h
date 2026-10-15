#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapDef; }

#define PKHDLFBNJDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BAEF0)
#define PKHDLFBNJDE_NFPADGPLOLE_OFFSET UNITYSDK_OFFSET(0xC2BAE80)

	class PKHDLFBNJDE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHDLFBNJDE_CTOR_OFFSET))(this);
		}

		::RPG::Client::Map* NFPADGPLOLE(::RPG::Client::MapDef* a1)
		{
			return ((::RPG::Client::Map*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + PKHDLFBNJDE_NFPADGPLOLE_OFFSET))(this, a1);
		}

	};
