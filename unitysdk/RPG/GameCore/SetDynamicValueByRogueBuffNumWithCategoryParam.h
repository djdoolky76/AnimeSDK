#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBuffNumWithCategoryParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECBBA50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECBBA60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECBBA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNumWithCategoryParam_TypeDefinitionIndex = 22168;

	class SetDynamicValueByRogueBuffNumWithCategoryParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithCategoryParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHCATEGORYPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
