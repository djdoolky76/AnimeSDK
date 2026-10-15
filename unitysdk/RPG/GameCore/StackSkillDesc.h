#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StackSkillDesc; }
namespace System { class String; }

#define RPG_GAMECORE_STACKSKILLDESC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB042F0)
#define RPG_GAMECORE_STACKSKILLDESC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB04300)
#define RPG_GAMECORE_STACKSKILLDESC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB042C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackSkillDesc_TypeDefinitionIndex = 23131;

	class StackSkillDesc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::RPG::Client::TextID OverrideDescTextID; // 0x20
		::RPG::Client::TextID OverrideSimpleDescTextID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSKILLDESC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackSkillDesc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackSkillDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSKILLDESC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackSkillDesc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackSkillDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSKILLDESC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
