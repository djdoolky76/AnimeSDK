#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_UseSprint; }

#define RPG_CLIENT_ST_PARKOUR_USESPRINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3092D0)
#define RPG_CLIENT_ST_PARKOUR_USESPRINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3092E0)
#define RPG_CLIENT_ST_PARKOUR_USESPRINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3092A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_UseSprint_TypeDefinitionIndex = 10267;

	class ST_Parkour_UseSprint : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean ForceUse; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single MinUseDeltaTime; // 0x1C
		::System::Single MaxUseDeltaTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_USESPRINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_UseSprint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_UseSprint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_USESPRINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_UseSprint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_UseSprint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_USESPRINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
