#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamFormulaExprConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0610)
#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0620)
#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C05C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamFormulaExprConfig_TypeDefinitionIndex = 17089;

	class ParamFormulaExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::String* Expr; // 0x10
		::Il2CppArray<::RPG::GameCore::MiParameterConfigBase*>* ParamList; // 0x18
		::System::Double DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamFormulaExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamFormulaExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamFormulaExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamFormulaExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
