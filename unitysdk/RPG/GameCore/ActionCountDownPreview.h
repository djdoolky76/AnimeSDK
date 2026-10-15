#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionCountDownPreviewMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionCountDownPreview; }

#define RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D343F00)
#define RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D343F10)
#define RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D343ED0)

namespace RPG::GameCore
{
	class ActionCountDownPreview : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ActionCountDownPreviewMode Mode; // 0x18
		::System::Int32 Offset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionCountDownPreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionCountDownPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionCountDownPreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionCountDownPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONCOUNTDOWNPREVIEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
