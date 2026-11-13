#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGBNIGPJPO;
namespace RPG::Client { class Map; }

#define RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x18D24560)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureMapTestInitParams_TypeDefinitionIndex = 62328;

	class AdventureMapTestInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::COGBNIGPJPO* DefaultEnvProfile; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS_CTOR_OFFSET))(this);
		}

	};
}
