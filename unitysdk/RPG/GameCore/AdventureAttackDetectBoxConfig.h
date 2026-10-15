#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectBoxConfig; }

#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B6920)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B6930)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B68F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectBoxConfig_TypeDefinitionIndex = 16274;

	class AdventureAttackDetectBoxConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::RPG::MVector3 Size; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectBoxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
