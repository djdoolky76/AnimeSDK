#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBtnBattleHintInfo; }

#define RPG_GAMECORE_SETBTNBATTLEHINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6B850)
#define RPG_GAMECORE_SETBTNBATTLEHINTINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6B860)
#define RPG_GAMECORE_SETBTNBATTLEHINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6B820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBtnBattleHintInfo_TypeDefinitionIndex = 23459;

	class SetBtnBattleHintInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID Title; // 0x18
		::System::UInt32 IntroID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBTNBATTLEHINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBtnBattleHintInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBTNBATTLEHINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBtnBattleHintInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBTNBATTLEHINTINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
