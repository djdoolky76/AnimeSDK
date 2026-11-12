#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

#define RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A8F70)
#define RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_GETSTYLEDYNAMICVALUEKEY_OFFSET UNITYSDK_OFFSET(0xD1A8F30)
#define RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_GET_BEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xD1A8EA0)
#define RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_GET_TRANSFORMORDER_OFFSET UNITYSDK_OFFSET(0xD1A8EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterMechanicShieldStyle_TypeDefinitionIndex = 73771;

	class BattleMonsterMechanicShieldStyle : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ModifierBehaviorFlag get_BehaviorFlag()
		{
			return ((::RPG::GameCore::ModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_GET_BEHAVIORFLAG_OFFSET))(this);
		}

		::System::Int32 get_TransformOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_GET_TRANSFORMORDER_OFFSET))(this);
		}

		::RPG::GameCore::StringHash GetStyleDynamicValueKey()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERMECHANICSHIELDSTYLE_GETSTYLEDYNAMICVALUEKEY_OFFSET))(this);
		}

	};
}
