#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueSpecialCellNum; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA1D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA1E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSpecialCellNum_TypeDefinitionIndex = 21794;

	class SetDynamicValueByRogueSpecialCellNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecialCellNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIALCELLNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
