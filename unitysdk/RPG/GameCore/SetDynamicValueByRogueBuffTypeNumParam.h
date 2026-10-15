#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBuffTypeNumParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C2D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C2E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffTypeNumParam_TypeDefinitionIndex = 21775;

	class SetDynamicValueByRogueBuffTypeNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
