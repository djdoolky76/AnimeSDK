#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPlayVO; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARACTERPLAYVO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D549250)
#define RPG_GAMECORE_CHARACTERPLAYVO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D549260)
#define RPG_GAMECORE_CHARACTERPLAYVO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D549220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPlayVO_TypeDefinitionIndex = 22478;

	class CharacterPlayVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterVOType VOType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPLAYVO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPlayVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPLAYVO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPlayVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPLAYVO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
