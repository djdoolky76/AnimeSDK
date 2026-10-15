#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveDitherGroup; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEDITHERGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9845D0)
#define RPG_GAMECORE_REMOVEDITHERGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9845E0)
#define RPG_GAMECORE_REMOVEDITHERGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9845A0)

namespace RPG::GameCore
{
	class RemoveDitherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::System::Single FadeDuration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDITHERGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveDitherGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDITHERGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveDitherGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDITHERGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
