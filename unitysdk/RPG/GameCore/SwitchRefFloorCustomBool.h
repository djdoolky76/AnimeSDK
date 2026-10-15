#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchRefFloorCustomBool; }

#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45F50)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB45F60)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46770)

namespace RPG::GameCore
{
	class SwitchRefFloorCustomBool : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
