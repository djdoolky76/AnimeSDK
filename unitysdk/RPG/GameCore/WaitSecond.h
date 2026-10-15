#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class WaitSecond; }

#define RPG_GAMECORE_WAITSECOND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC738F0)
#define RPG_GAMECORE_WAITSECOND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC73960)
#define RPG_GAMECORE_WAITSECOND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC736C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSecond_TypeDefinitionIndex = 23785;

	class WaitSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18
		::System::Single MaxAdvencePerTick; // 0x20
		::System::Boolean IsRealtime; // 0x24
		::System::Boolean UseRealtime; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSECOND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSECOND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSecond* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSECOND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
