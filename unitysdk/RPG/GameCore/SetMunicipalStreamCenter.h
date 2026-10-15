#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMunicipalStreamCenter; }

#define RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABD010)
#define RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABD020)
#define RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABCFE0)

namespace RPG::GameCore
{
	class SetMunicipalStreamCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UseCamera; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMunicipalStreamCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMunicipalStreamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMunicipalStreamCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMunicipalStreamCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALSTREAMCENTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
