#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamExprConfig; }

#define RPG_GAMECORE_PARAMEXPRCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C03C0)
#define RPG_GAMECORE_PARAMEXPRCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C03D0)
#define RPG_GAMECORE_PARAMEXPRCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamExprConfig_TypeDefinitionIndex = 17081;

	class ParamExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamExprType ExprType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MiParameterConfigBase* Value1; // 0x18
		::RPG::GameCore::MiParameterConfigBase* Value2; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMEXPRCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
