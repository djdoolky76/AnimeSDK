#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueHandbookUI; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SHOWROGUEHANDBOOKUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3460)
#define RPG_GAMECORE_SHOWROGUEHANDBOOKUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE3470)
#define RPG_GAMECORE_SHOWROGUEHANDBOOKUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3430)

namespace RPG::GameCore
{
	class ShowRogueHandbookUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Version; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEHANDBOOKUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueHandbookUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueHandbookUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEHANDBOOKUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueHandbookUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueHandbookUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEHANDBOOKUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
