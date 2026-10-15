#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenSetAreaAnchorVisible; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76F870)
#define RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76F880)
#define RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76F830)

namespace RPG::GameCore
{
	class HipplenSetAreaAnchorVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenSetAreaAnchorVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenSetAreaAnchorVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenSetAreaAnchorVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenSetAreaAnchorVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENSETAREAANCHORVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
