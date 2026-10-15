#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParamGetBlackboardValueConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EE240)
#define RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8EE250)
#define RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8EE170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamGetBlackboardValueConfig_TypeDefinitionIndex = 17088;

	class ParamGetBlackboardValueConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::String* Key; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamGetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamGetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParamGetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParamGetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
