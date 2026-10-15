#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchRefFloorCustomString; }

#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB18790)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB187A0)
#define RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB18FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefFloorCustomString_TypeDefinitionIndex = 17523;

	class SwitchRefFloorCustomString : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefFloorCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFFLOORCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
