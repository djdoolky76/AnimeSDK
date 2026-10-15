#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StackStatusDesc; }

#define RPG_GAMECORE_STACKSTATUSDESC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6CC0)
#define RPG_GAMECORE_STACKSTATUSDESC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD6CD0)
#define RPG_GAMECORE_STACKSTATUSDESC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD6C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackStatusDesc_TypeDefinitionIndex = 23638;

	class StackStatusDesc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSDESC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackStatusDesc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackStatusDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSDESC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackStatusDesc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackStatusDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSDESC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
