#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByIsAttacker; }

#define RPG_GAMECORE_MARBLEBYISATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83A690)
#define RPG_GAMECORE_MARBLEBYISATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83A6A0)
#define RPG_GAMECORE_MARBLEBYISATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83A640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsAttacker_TypeDefinitionIndex = 16874;

	class MarbleByIsAttacker : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByIsAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByIsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByIsAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByIsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
