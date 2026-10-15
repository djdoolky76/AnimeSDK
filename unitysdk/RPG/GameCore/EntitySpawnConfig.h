#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntitySpawnConfig; }

#define RPG_GAMECORE_ENTITYSPAWNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64C310)
#define RPG_GAMECORE_ENTITYSPAWNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D64ABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntitySpawnConfig_TypeDefinitionIndex = 19214;

	class EntitySpawnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean NeedBlackIn; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single BlackInDistance; // 0x14
		::System::Boolean NeedFadeIn; // 0x18
		::System::Boolean NeedFadeOut; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSPAWNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntitySpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntitySpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSPAWNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
