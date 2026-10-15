#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseTimeRewindRecreateWorldPage; }

#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C80E0)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C80F0)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C8020)

namespace RPG::GameCore
{
	class CloseTimeRewindRecreateWorldPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
