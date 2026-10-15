#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetHistoryAllCoinInterestConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A7A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A7B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetHistoryAllCoinInterestConfig_TypeDefinitionIndex = 19543;

	class GridFightParamGetHistoryAllCoinInterestConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
