#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByTargetEntityType; }

#define RPG_GAMECORE_ADVBYTARGETENTITYTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36B040)
#define RPG_GAMECORE_ADVBYTARGETENTITYTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36B050)
#define RPG_GAMECORE_ADVBYTARGETENTITYTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36B010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByTargetEntityType_TypeDefinitionIndex = 20595;

	class AdvByTargetEntityType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTARGETENTITYTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByTargetEntityType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTARGETENTITYTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByTargetEntityType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTARGETENTITYTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
