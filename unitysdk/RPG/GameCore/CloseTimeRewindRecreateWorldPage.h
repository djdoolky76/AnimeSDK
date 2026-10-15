#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseTimeRewindRecreateWorldPage; }

#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59A650)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59A660)
#define RPG_GAMECORE_CLOSETIMEREWINDRECREATEWORLDPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59A590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseTimeRewindRecreateWorldPage_TypeDefinitionIndex = 20666;

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
