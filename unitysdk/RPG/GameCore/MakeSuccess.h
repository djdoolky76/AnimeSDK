#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MakeSuccess; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAKESUCCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FEF60)
#define RPG_GAMECORE_MAKESUCCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7FEF70)
#define RPG_GAMECORE_MAKESUCCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FEF30)

namespace RPG::GameCore
{
	class MakeSuccess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TaskConfig* Task; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MakeSuccess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MakeSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MakeSuccess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MakeSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKESUCCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
