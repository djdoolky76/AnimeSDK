#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceSplitLineChange; }

#define RPG_GAMECORE_CONVINCESPLITLINECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B2050)
#define RPG_GAMECORE_CONVINCESPLITLINECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B2060)
#define RPG_GAMECORE_CONVINCESPLITLINECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B2020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceSplitLineChange_TypeDefinitionIndex = 21834;

	class ConvinceSplitLineChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ChangeNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceSplitLineChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceSplitLineChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceSplitLineChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceSplitLineChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCESPLITLINECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
