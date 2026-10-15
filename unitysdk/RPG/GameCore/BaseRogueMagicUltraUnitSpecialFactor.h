#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseRogueMagicUltraUnitSpecialFactor; }

#define RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43F920)
#define RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43F930)
#define RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43F720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseRogueMagicUltraUnitSpecialFactor_TypeDefinitionIndex = 17925;

	class BaseRogueMagicUltraUnitSpecialFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
