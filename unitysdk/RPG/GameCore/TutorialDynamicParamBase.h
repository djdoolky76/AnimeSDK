#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialDynamicParamBase; }

#define RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3A3F0)
#define RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3A390)
#define RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3A1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialDynamicParamBase_TypeDefinitionIndex = 24324;

	class TutorialDynamicParamBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialDynamicParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialDynamicParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
