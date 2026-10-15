#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerSetStableMovable; }

#define RPG_GAMECORE_SERVERSETSTABLEMOVABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64680)
#define RPG_GAMECORE_SERVERSETSTABLEMOVABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA64690)
#define RPG_GAMECORE_SERVERSETSTABLEMOVABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerSetStableMovable_TypeDefinitionIndex = 21070;

	class ServerSetStableMovable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETSTABLEMOVABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerSetStableMovable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerSetStableMovable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETSTABLEMOVABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerSetStableMovable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerSetStableMovable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETSTABLEMOVABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
