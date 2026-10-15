#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionSetBlackboardValueConfig; }
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3475F0)
#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D347640)
#define RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D347560)

namespace RPG::GameCore
{
	class ActionSetBlackboardValueConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::String* Key; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionSetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionSetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionSetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionSetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETBLACKBOARDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
