#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByOtherFaction; }

#define RPG_GAMECORE_MARBLEBYOTHERFACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83ACF0)
#define RPG_GAMECORE_MARBLEBYOTHERFACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83AD00)
#define RPG_GAMECORE_MARBLEBYOTHERFACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83ACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByOtherFaction_TypeDefinitionIndex = 16879;

	class MarbleByOtherFaction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleFaction>* FactionList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByOtherFaction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByOtherFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByOtherFaction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByOtherFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
