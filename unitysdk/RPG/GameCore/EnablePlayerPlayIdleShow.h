#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnablePlayerPlayIdleShow; }

#define RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6403E0)
#define RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6403F0)
#define RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6403A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnablePlayerPlayIdleShow_TypeDefinitionIndex = 22246;

	class EnablePlayerPlayIdleShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnablePlayerPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnablePlayerPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
