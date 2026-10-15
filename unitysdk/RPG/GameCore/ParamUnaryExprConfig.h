#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamUnaryExprType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace RPG::GameCore { class ParamUnaryExprConfig; }

#define RPG_GAMECORE_PARAMUNARYEXPRCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EE700)
#define RPG_GAMECORE_PARAMUNARYEXPRCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EE710)
#define RPG_GAMECORE_PARAMUNARYEXPRCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EE6B0)

namespace RPG::GameCore
{
	class ParamUnaryExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamUnaryExprType ExprType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMUNARYEXPRCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamUnaryExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamUnaryExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMUNARYEXPRCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamUnaryExprConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamUnaryExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMUNARYEXPRCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
