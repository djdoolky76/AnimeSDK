#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueDifficultyCompMappingParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C380)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C390)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueDifficultyCompMappingParam_TypeDefinitionIndex = 21800;

	class SetDynamicValueByRogueDifficultyCompMappingParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueDifficultyCompMappingParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEDIFFICULTYCOMPMAPPINGPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
