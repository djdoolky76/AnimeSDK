#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPenaconyGiftSubmitPage; }

#define RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2320)
#define RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE2330)
#define RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE22F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPenaconyGiftSubmitPage_TypeDefinitionIndex = 21248;

	class ShowPenaconyGiftSubmitPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GiftID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPenaconyGiftSubmitPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPenaconyGiftSubmitPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPENACONYGIFTSUBMITPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
