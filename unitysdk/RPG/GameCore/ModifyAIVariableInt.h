#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifyAIVariableFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyAIVariableInt; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYAIVARIABLEINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8620B0)
#define RPG_GAMECORE_MODIFYAIVARIABLEINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8620C0)
#define RPG_GAMECORE_MODIFYAIVARIABLEINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D862080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAIVariableInt_TypeDefinitionIndex = 20023;

	class ModifyAIVariableInt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* VarName; // 0x18
		::RPG::GameCore::ModifyAIVariableFunction ModifyFunc; // 0x20
		::System::Int32 ChangeValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVARIABLEINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAIVariableInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVARIABLEINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyAIVariableInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVARIABLEINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
