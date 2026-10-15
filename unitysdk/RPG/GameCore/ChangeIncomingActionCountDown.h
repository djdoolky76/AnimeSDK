#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeIncomingActionCountDown; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D539AE0)
#define RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D539AF0)
#define RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D539AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeIncomingActionCountDown_TypeDefinitionIndex = 23694;

	class ChangeIncomingActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Offset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeIncomingActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeIncomingActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeIncomingActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeIncomingActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEINCOMINGACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
