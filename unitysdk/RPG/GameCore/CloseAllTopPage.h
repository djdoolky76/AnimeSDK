#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseAllTopPage; }

#define RPG_GAMECORE_CLOSEALLTOPPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7860)
#define RPG_GAMECORE_CLOSEALLTOPPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7870)
#define RPG_GAMECORE_CLOSEALLTOPPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C77A0)

namespace RPG::GameCore
{
	class CloseAllTopPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseAllTopPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseAllTopPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
