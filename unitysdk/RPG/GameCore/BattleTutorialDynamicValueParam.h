#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleTutorialDynamicValueParam; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43C810)
#define RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43C820)
#define RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43C740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTutorialDynamicValueParam_TypeDefinitionIndex = 24325;

	class BattleTutorialDynamicValueParam : public ::RPG::GameCore::TutorialDynamicParamBase
	{
	public:
		::System::String* Key; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleTutorialDynamicValueParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleTutorialDynamicValueParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleTutorialDynamicValueParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleTutorialDynamicValueParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETUTORIALDYNAMICVALUEPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
