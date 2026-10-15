#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ParkourSetCountDownAnimSpeed; }

#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D328EA0)
#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D328EB0)
#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D328E70)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSetCountDownAnimSpeed_TypeDefinitionIndex = 10261;

	class ParkourSetCountDownAnimSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Speed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ParkourSetCountDownAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ParkourSetCountDownAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
