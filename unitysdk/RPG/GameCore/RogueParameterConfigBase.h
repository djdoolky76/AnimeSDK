#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParameterConfigBase; }

#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FCF90)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE0E0)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FE080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParameterConfigBase_TypeDefinitionIndex = 19817;

	class RogueParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
