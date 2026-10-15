#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearEntityDamageText; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYDAMAGETEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5E60)
#define RPG_GAMECORE_CLEARENTITYDAMAGETEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B5E70)
#define RPG_GAMECORE_CLEARENTITYDAMAGETEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5E30)

namespace RPG::GameCore
{
	class ClearEntityDamageText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::UIDamageTextType TextType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYDAMAGETEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityDamageText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityDamageText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYDAMAGETEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearEntityDamageText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearEntityDamageText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYDAMAGETEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
