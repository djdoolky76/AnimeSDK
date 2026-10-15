#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateTextDynamicParamBuffName; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69ED40)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69ED50)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69ECF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamBuffName_TypeDefinitionIndex = 16648;

	class FateTextDynamicParamBuffName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* BuffID; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Level; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamBuffName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamBuffName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamBuffName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamBuffName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMBUFFNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
