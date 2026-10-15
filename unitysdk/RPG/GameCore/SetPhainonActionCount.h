#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetPhainonActionCount; }

#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABEA90)
#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABEAA0)
#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABEA60)

namespace RPG::GameCore
{
	class SetPhainonActionCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPhainonActionCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPhainonActionCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPhainonActionCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPhainonActionCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
