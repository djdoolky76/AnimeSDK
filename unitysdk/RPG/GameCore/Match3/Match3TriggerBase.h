#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiTriggerConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3TriggerBase; }

#define RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C740)
#define RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D821300)
#define RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D820930)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TriggerBase_TypeDefinitionIndex = 24872;

	class Match3TriggerBase : public ::RPG::GameCore::MiTriggerConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TriggerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TriggerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TriggerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TriggerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
