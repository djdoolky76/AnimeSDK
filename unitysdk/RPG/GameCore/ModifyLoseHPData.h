#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyLoseHPData; }

#define RPG_GAMECORE_MODIFYLOSEHPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FCF10)
#define RPG_GAMECORE_MODIFYLOSEHPDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6FCF70)
#define RPG_GAMECORE_MODIFYLOSEHPDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6FCE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyLoseHPData_TypeDefinitionIndex = 24020;

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
