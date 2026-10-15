#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGBNIGPJPO;
namespace RPG::Client { class Map; }

#define RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D9AB0)

namespace RPG::Client
{
	class AdventureMapTestInitParams : public ::System::Object
	{
	public:
		::COGBNIGPJPO* DefaultEnvProfile; // 0x10
		::RPG::Client::Map* Map; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS_CTOR_OFFSET))(this);
		}

	};
}
