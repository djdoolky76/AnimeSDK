#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }

#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D849D60)
#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84D160)
#define RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84C8D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ConditionBase_TypeDefinitionIndex = 24882;

	class Match3ConditionBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3ConditionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3ConditionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONDITIONBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
