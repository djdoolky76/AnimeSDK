#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerGameLoadingViewAction; }

#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B44D0)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B44E0)
#define RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B44A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerGameLoadingViewAction_TypeDefinitionIndex = 18657;

	class FiveDimTriggerGameLoadingViewAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsClose; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimCustomScreenTransferStyle TransferStyle; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERGAMELOADINGVIEWACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
