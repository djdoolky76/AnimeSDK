#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByIsKiller; }

#define RPG_GAMECORE_MARBLEBYISKILLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA554F0)
#define RPG_GAMECORE_MARBLEBYISKILLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA55500)
#define RPG_GAMECORE_MARBLEBYISKILLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA554A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsKiller_TypeDefinitionIndex = 17043;

	class MarbleByIsKiller : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISKILLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByIsKiller* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByIsKiller*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISKILLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByIsKiller* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByIsKiller*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISKILLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
