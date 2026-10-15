#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TryAsyncLoadUI; }

#define RPG_GAMECORE_TRYASYNCLOADUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC33100)
#define RPG_GAMECORE_TRYASYNCLOADUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC33110)
#define RPG_GAMECORE_TRYASYNCLOADUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC33040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryAsyncLoadUI_TypeDefinitionIndex = 20570;

	class TryAsyncLoadUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYASYNCLOADUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryAsyncLoadUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryAsyncLoadUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYASYNCLOADUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryAsyncLoadUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryAsyncLoadUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYASYNCLOADUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
