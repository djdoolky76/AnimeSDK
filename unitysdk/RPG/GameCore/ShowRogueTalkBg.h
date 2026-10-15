#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueTalkBg; }

#define RPG_GAMECORE_SHOWROGUETALKBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3AE0)
#define RPG_GAMECORE_SHOWROGUETALKBG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE3AF0)
#define RPG_GAMECORE_SHOWROGUETALKBG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueTalkBg_TypeDefinitionIndex = 21118;

	class ShowRogueTalkBg : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TalkBgID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKBG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueTalkBg* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueTalkBg*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKBG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueTalkBg* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueTalkBg*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUETALKBG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
