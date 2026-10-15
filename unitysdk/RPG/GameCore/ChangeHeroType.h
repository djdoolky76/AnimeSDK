#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeHeroType; }

#define RPG_GAMECORE_CHANGEHEROTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D567510)
#define RPG_GAMECORE_CHANGEHEROTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D567520)
#define RPG_GAMECORE_CHANGEHEROTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5674D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeHeroType_TypeDefinitionIndex = 20459;

	class ChangeHeroType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeHeroType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeHeroType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeHeroType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeHeroType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
