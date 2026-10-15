#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD8AF7C0)
#define RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE_GET_ISSHOWWAVEINDEX_OFFSET UNITYSDK_OFFSET(0xD8AF780)

namespace RPG::Client::Monster
{
	inline static constexpr unsigned int MonsterDataProviderViewModelBase_TypeDefinitionIndex = 79409;

	class MonsterDataProviderViewModelBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowWaveIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTER_MONSTERDATAPROVIDERVIEWMODELBASE_GET_ISSHOWWAVEINDEX_OFFSET))(this);
		}

	};
}
