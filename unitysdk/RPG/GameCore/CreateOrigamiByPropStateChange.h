#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateOrigamiByPropStateChange; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E4440)
#define RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E4450)
#define RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E4410)

namespace RPG::GameCore
{
	class CreateOrigamiByPropStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateOrigamiByPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateOrigamiByPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateOrigamiByPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateOrigamiByPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEORIGAMIBYPROPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
