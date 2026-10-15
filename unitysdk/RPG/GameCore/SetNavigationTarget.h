#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNavigationTarget; }
namespace System { class String; }

#define RPG_GAMECORE_SETNAVIGATIONTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA90530)
#define RPG_GAMECORE_SETNAVIGATIONTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA90540)
#define RPG_GAMECORE_SETNAVIGATIONTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA90500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNavigationTarget_TypeDefinitionIndex = 24362;

	class SetNavigationTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NodeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVIGATIONTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNavigationTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNavigationTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVIGATIONTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNavigationTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNavigationTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNAVIGATIONTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
