#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleItemProgressInfo; }

#define RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA695A0)
#define RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA695B0)
#define RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA69560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleItemProgressInfo_TypeDefinitionIndex = 23245;

	class SetBattleItemProgressInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* Progress; // 0x20
		::RPG::GameCore::DynamicFloat* Count; // 0x28
		::System::Boolean PlayLevelUp; // 0x30
		::System::Boolean PlayClearAnim; // 0x31
		::System::Byte _padding1[0x6];
		::RPG::Client::TextID CountTextID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEITEMPROGRESSINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
