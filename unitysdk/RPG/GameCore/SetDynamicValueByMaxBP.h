#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByMaxBP; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA7040)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA7050)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA7000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMaxBP_TypeDefinitionIndex = 23582;

	class SetDynamicValueByMaxBP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::System::Boolean GetRawMax; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMaxBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMaxBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMaxBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMaxBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAXBP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
