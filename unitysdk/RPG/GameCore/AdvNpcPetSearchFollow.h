#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcPetSearchFollow; }

#define RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A8B90)
#define RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A8BA0)
#define RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A8AD0)

namespace RPG::GameCore
{
	class AdvNpcPetSearchFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcPetSearchFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcPetSearchFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcPetSearchFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcPetSearchFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPETSEARCHFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
