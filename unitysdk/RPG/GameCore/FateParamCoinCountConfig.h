#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamCoinCountConfig; }

#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BE20)
#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69BE30)
#define RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamCoinCountConfig_TypeDefinitionIndex = 16641;

	class FateParamCoinCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCOINCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
