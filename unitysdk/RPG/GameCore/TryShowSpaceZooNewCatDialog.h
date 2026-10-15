#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TryShowSpaceZooNewCatDialog; }

#define RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC61360)
#define RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC61370)
#define RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC612A0)

namespace RPG::GameCore
{
	class TryShowSpaceZooNewCatDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryShowSpaceZooNewCatDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryShowSpaceZooNewCatDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWSPACEZOONEWCATDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
