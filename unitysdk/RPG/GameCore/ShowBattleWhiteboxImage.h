#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleWhiteboxImage; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9110)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9120)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD90E0)

namespace RPG::GameCore
{
	class ShowBattleWhiteboxImage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsClearAll; // 0x18
		::System::Boolean IsRemove; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* ImgPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleWhiteboxImage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleWhiteboxImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleWhiteboxImage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleWhiteboxImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
