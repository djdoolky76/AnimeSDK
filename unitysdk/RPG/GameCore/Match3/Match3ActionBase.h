#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3ActionBase; }

#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C4F0)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81E710)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81E6D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ActionBase_TypeDefinitionIndex = 24896;

	class Match3ActionBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3ActionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3ActionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
