#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleBlockModifierConstKeys; }

#define RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEB240)
#define RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEB0C0)

namespace RPG::GameCore
{
	class SingleBlockModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyHashMaxValue; // 0x10
		::RPG::GameCore::StringHash KeyHashCurrentValue; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleBlockModifierConstKeys* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleBlockModifierConstKeys*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEBLOCKMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
