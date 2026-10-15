#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class OnEventCallBack; }

#define FBHOHPOGPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1569F1C0)
#define FBHOHPOGPHL_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0x1569EE60)
#define FBHOHPOGPHL_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x1569F170)
#define FBHOHPOGPHL_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x1569EE20)
#define FBHOHPOGPHL_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x1569EBD0)
#define FBHOHPOGPHL_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0x1569F010)

	class FBHOHPOGPHL : public ::CNCLNAFILDC
	{
	public:
		::RPG::GameCore::OnEventCallBack* GKJKMGLDLPK; // 0x40
		::RPG::GameCore::EventType JNPBFPGIMOC; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHOHPOGPHL_CTOR_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHOHPOGPHL_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHOHPOGPHL_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void GNDEALGPILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHOHPOGPHL_GNDEALGPILP_OFFSET))(this);
		}

		::System::Void MHDCDNHDBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHOHPOGPHL_MHDCDNHDBKB_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FBHOHPOGPHL_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
