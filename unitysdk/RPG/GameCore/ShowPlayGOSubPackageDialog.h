#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPlayGOSubPackageDialog; }

#define RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2900)
#define RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE2910)
#define RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2840)

namespace RPG::GameCore
{
	class ShowPlayGOSubPackageDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPlayGOSubPackageDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPlayGOSubPackageDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPlayGOSubPackageDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPlayGOSubPackageDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPLAYGOSUBPACKAGEDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
