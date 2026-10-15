#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueFormaluaUI; }

#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3290)
#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE32A0)
#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueFormaluaUI_TypeDefinitionIndex = 20811;

	class ShowRogueFormaluaUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FormaluaIDList; // 0x18
		::System::Boolean ShowGetOrDetail; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueFormaluaUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueFormaluaUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueFormaluaUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueFormaluaUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
