#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueSpecificCategoryMiracleNumParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA290)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA2A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSpecificCategoryMiracleNumParam_TypeDefinitionIndex = 21798;

	class SetDynamicValueByRogueSpecificCategoryMiracleNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
