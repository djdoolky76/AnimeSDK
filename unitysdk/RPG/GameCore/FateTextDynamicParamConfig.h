#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace RPG::GameCore { class TextDynamicParamBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F040)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69EEC0)

namespace RPG::GameCore
{
	class FateTextDynamicParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x10
		::Il2CppArray<::RPG::GameCore::TextDynamicParamBase*>* Params; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
