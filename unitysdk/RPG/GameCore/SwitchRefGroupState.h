#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefGroupState; }

#define RPG_GAMECORE_SWITCHREFGROUPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46420)
#define RPG_GAMECORE_SWITCHREFGROUPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB46430)
#define RPG_GAMECORE_SWITCHREFGROUPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46AF0)

namespace RPG::GameCore
{
	class SwitchRefGroupState : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
