#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A9C10)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_GETSTYLEDYNAMICVALUEKEY_OFFSET UNITYSDK_OFFSET(0xD1A9BA0)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_GET_BEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xD1A9B00)
#define RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_GET_TRANSFORMORDER_OFFSET UNITYSDK_OFFSET(0xD1A9B50)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterSingleBlockStyle_TypeDefinitionIndex = 73772;

	class BattleMonsterSingleBlockStyle : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ModifierBehaviorFlag get_BehaviorFlag()
		{
			return ((::RPG::GameCore::ModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_GET_BEHAVIORFLAG_OFFSET))(this);
		}

		::System::Int32 get_TransformOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_GET_TRANSFORMORDER_OFFSET))(this);
		}

		::RPG::GameCore::StringHash GetStyleDynamicValueKey()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSINGLEBLOCKSTYLE_GETSTYLEDYNAMICVALUEKEY_OFFSET))(this);
		}

	};
}
