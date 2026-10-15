#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TryTransferToHeroRoom; }

#define RPG_GAMECORE_TRYTRANSFERTOHEROROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC61680)
#define RPG_GAMECORE_TRYTRANSFERTOHEROROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC61690)
#define RPG_GAMECORE_TRYTRANSFERTOHEROROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC615C0)

namespace RPG::GameCore
{
	class TryTransferToHeroRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRANSFERTOHEROROOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryTransferToHeroRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryTransferToHeroRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRANSFERTOHEROROOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryTransferToHeroRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryTransferToHeroRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRANSFERTOHEROROOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
