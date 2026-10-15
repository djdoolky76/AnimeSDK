#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WhiteBoxCommandTaskType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WhiteBoxFuncCommand; }
namespace System { class String; }

#define RPG_GAMECORE_WHITEBOXFUNCCOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA73A0)
#define RPG_GAMECORE_WHITEBOXFUNCCOMMAND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA73E0)
#define RPG_GAMECORE_WHITEBOXFUNCCOMMAND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA7340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WhiteBoxFuncCommand_TypeDefinitionIndex = 22814;

	class WhiteBoxFuncCommand : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::WhiteBoxCommandTaskType Command; // 0x24
		::System::String* ParamStr; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITEBOXFUNCCOMMAND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WhiteBoxFuncCommand* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WhiteBoxFuncCommand*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITEBOXFUNCCOMMAND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WhiteBoxFuncCommand* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WhiteBoxFuncCommand*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITEBOXFUNCCOMMAND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
