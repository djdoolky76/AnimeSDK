#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamGetExcelValueConfig; }

#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0A40)
#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0A50)
#define RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamGetExcelValueConfig_TypeDefinitionIndex = 17087;

	class ParamGetExcelValueConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Index; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamGetExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamGetExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamGetExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamGetExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETEXCELVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
