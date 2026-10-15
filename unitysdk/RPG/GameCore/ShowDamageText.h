#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowDamageTextType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowDamageText; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWDAMAGETEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADA330)
#define RPG_GAMECORE_SHOWDAMAGETEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADA340)
#define RPG_GAMECORE_SHOWDAMAGETEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADA300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowDamageText_TypeDefinitionIndex = 23560;

	class ShowDamageText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ShowDamageTextType Type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDAMAGETEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowDamageText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowDamageText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDAMAGETEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowDamageText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowDamageText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDAMAGETEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
