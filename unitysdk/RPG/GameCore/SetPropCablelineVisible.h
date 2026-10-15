#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPropCablelineVisible; }

#define RPG_GAMECORE_SETPROPCABLELINEVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABF3E0)
#define RPG_GAMECORE_SETPROPCABLELINEVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABF3F0)
#define RPG_GAMECORE_SETPROPCABLELINEVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABF3B0)

namespace RPG::GameCore
{
	class SetPropCablelineVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LinePropInstanceID; // 0x18
		::System::Boolean IsVisible; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCABLELINEVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropCablelineVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropCablelineVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCABLELINEVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropCablelineVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropCablelineVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCABLELINEVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
