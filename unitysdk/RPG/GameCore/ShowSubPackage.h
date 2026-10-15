#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowSubPackage; }

#define RPG_GAMECORE_SHOWSUBPACKAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE54C0)
#define RPG_GAMECORE_SHOWSUBPACKAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE54D0)
#define RPG_GAMECORE_SHOWSUBPACKAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE5400)

namespace RPG::GameCore
{
	class ShowSubPackage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSUBPACKAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSubPackage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSubPackage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSUBPACKAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSubPackage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSubPackage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSUBPACKAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
