#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierModifyMasterDamageConfig; }

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B830)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B840)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterDamageConfig_TypeDefinitionIndex = 19270;

	class FateModifierModifyMasterDamageConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyMasterDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyMasterDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
