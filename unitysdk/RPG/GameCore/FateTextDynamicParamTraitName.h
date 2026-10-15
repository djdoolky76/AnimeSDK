#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateTextDynamicParamTraitName; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F350)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69F360)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69F240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamTraitName_TypeDefinitionIndex = 16646;

	class FateTextDynamicParamTraitName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* TraitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamTraitName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamTraitName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamTraitName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamTraitName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMTRAITNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
