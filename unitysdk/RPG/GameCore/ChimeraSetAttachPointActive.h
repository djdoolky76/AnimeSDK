#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraSetAttachPointActive; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE8D0)
#define RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AE8E0)
#define RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AE880)

namespace RPG::GameCore
{
	class ChimeraSetAttachPointActive : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AttachPoint; // 0x18
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x20
		::System::Boolean ActiveState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraSetAttachPointActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraSetAttachPointActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraSetAttachPointActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraSetAttachPointActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETATTACHPOINTACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
