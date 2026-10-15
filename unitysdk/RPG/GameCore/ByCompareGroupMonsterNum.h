#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGroupMonsterNum; }

#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B2E20)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B2E30)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B2DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupMonsterNum_TypeDefinitionIndex = 22263;

	class ByCompareGroupMonsterNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupMonsterNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupMonsterNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupMonsterNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupMonsterNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
