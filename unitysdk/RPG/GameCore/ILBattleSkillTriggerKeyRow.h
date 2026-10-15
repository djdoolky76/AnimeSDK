#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleSkillTriggerKeyRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7769E0)
#define RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D776860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleSkillTriggerKeyRow_TypeDefinitionIndex = 13790;

	class ILBattleSkillTriggerKeyRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleSkillTriggerKeyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleSkillTriggerKeyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLESKILLTRIGGERKEYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
