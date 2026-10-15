#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_LookAtTarget; }

#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA853A0)
#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA853B0)
#define RPG_GAMECORE_ST_SIDE_LOOKATTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA852E0)

namespace RPG::GameCore
{
	class ST_Side_LookAtTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LOOKATTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
