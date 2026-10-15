#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddPamMenuItem; }

#define RPG_GAMECORE_ADDPAMMENUITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38AC00)
#define RPG_GAMECORE_ADDPAMMENUITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38AC10)
#define RPG_GAMECORE_ADDPAMMENUITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38AB40)

namespace RPG::GameCore
{
	class AddPamMenuItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDPAMMENUITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddPamMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddPamMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDPAMMENUITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddPamMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddPamMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDPAMMENUITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
