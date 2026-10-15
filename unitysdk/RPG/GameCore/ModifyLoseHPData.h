#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyLoseHPData; }

#define RPG_GAMECORE_MODIFYLOSEHPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86A930)
#define RPG_GAMECORE_MODIFYLOSEHPDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86A990)
#define RPG_GAMECORE_MODIFYLOSEHPDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86A8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyLoseHPData_TypeDefinitionIndex = 23573;

	class ModifyLoseHPData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConstFinalDamage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyLoseHPData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyLoseHPData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyLoseHPData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyLoseHPData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
