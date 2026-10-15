#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDeleteEffect; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADELETEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D598FC0)
#define RPG_GAMECORE_CHIMERADELETEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D598FD0)
#define RPG_GAMECORE_CHIMERADELETEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59A2D0)

namespace RPG::GameCore
{
	class ChimeraDeleteEffect : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADELETEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDeleteEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDeleteEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADELETEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDeleteEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDeleteEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADELETEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
