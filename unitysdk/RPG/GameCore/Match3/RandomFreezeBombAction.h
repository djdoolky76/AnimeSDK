#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RandomFreezeBombAction; }

#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84FFE0)
#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84FFF0)
#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84FF90)

namespace RPG::GameCore::Match3
{
	class RandomFreezeBombAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Line; // 0x18
		::System::Boolean Square; // 0x19
		::System::Boolean MultiStyle; // 0x1A
		::System::Byte _padding0[0x1];
		::System::UInt32 Count; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomFreezeBombAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomFreezeBombAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
