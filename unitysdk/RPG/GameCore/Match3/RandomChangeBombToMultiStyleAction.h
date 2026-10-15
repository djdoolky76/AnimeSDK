#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RandomChangeBombToMultiStyleAction; }

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D822190)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8221A0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D822140)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeBombToMultiStyleAction_TypeDefinitionIndex = 24917;

	class RandomChangeBombToMultiStyleAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
