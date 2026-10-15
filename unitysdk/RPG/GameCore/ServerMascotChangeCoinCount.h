#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerMascotChangeCoinCount; }

#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91C60)
#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA91C70)
#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerMascotChangeCoinCount_TypeDefinitionIndex = 21268;

	class ServerMascotChangeCoinCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerMascotChangeCoinCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerMascotChangeCoinCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerMascotChangeCoinCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerMascotChangeCoinCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
