#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationModifierConstKeys; }

#define RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D632A10)
#define RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D632930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationModifierConstKeys_TypeDefinitionIndex = 17103;

	class ElationModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyHashElationEchoPoint; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationModifierConstKeys* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationModifierConstKeys*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
