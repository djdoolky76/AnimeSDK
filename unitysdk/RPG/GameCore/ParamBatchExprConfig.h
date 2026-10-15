#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamBatchExprConfig; }

#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BFC00)
#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BFC10)
#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BFBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamBatchExprConfig_TypeDefinitionIndex = 17084;

	class ParamBatchExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamExprType ExprType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::MiParameterConfigBase*>* ValueList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamBatchExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamBatchExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamBatchExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamBatchExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
