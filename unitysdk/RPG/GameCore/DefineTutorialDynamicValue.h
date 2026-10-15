#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DefineTutorialDynamicValue; }
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace System { class String; }

#define RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FB1F0)
#define RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FB200)
#define RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FB1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefineTutorialDynamicValue_TypeDefinitionIndex = 24382;

	class DefineTutorialDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::TutorialDynamicParamBase* Param; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DefineTutorialDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DefineTutorialDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DefineTutorialDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DefineTutorialDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINETUTORIALDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
