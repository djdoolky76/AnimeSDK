#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShieldModifierConstKeys; }

#define RPG_GAMECORE_SHIELDMODIFIERCONSTKEYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA44E0)
#define RPG_GAMECORE_SHIELDMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShieldModifierConstKeys_TypeDefinitionIndex = 17102;

	class ShieldModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyHashShield; // 0x10
		::RPG::GameCore::StringHash KeyHashCurrentShield; // 0x14
		::RPG::GameCore::StringHash KeyHashCommonResistanced; // 0x18
		::RPG::GameCore::StringHash KeyHashPhysicalResistanced; // 0x1C
		::RPG::GameCore::StringHash KeyHashFireDamageResistance; // 0x20
		::RPG::GameCore::StringHash KeyHashIceDamageResistance; // 0x24
		::RPG::GameCore::StringHash KeyHashThunderDamageResistance; // 0x28
		::RPG::GameCore::StringHash KeyHashWindDamageResistance; // 0x2C
		::RPG::GameCore::StringHash KeyHashImaginaryDamageResistance; // 0x30
		::RPG::GameCore::StringHash KeyHashQuantumDamageResistance; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIELDMODIFIERCONSTKEYS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShieldModifierConstKeys* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShieldModifierConstKeys*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIELDMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
