#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGroupPropNum; }

#define RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B2EE0)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B2EF0)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B2EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupPropNum_TypeDefinitionIndex = 21232;

	class ByCompareGroupPropNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupPropNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupPropNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupPropNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupPropNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
