#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleWhiteboxText; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9330)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9340)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD9300)

namespace RPG::GameCore
{
	class ShowBattleWhiteboxText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* TextContent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleWhiteboxText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleWhiteboxText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleWhiteboxText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleWhiteboxText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
