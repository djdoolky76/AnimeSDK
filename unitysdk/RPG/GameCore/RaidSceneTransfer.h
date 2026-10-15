#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidSceneTransfer; }

#define RPG_GAMECORE_RAIDSCENETRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96A070)
#define RPG_GAMECORE_RAIDSCENETRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96A080)
#define RPG_GAMECORE_RAIDSCENETRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96A030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidSceneTransfer_TypeDefinitionIndex = 20495;

	class RaidSceneTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDSCENETRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidSceneTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidSceneTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDSCENETRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidSceneTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidSceneTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDSCENETRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
